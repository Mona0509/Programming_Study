#include "FenceSystem.h"

ComPtr<ID3D12Fence> FenceSystem::CreatesFence(ComPtr<ID3D12Device> _device) {
	ComPtr<ID3D12Fence> fence;
	UINT64 fenceValue = 0;
	_device->CreateFence(0, D3D12_FENCE_FLAG_NONE, IID_PPV_ARGS(&fence));
	fenceEvent = CreateEvent(nullptr, FALSE, FALSE, nullptr);

	return fence;
}

void FenceSystem::WaitFence(ComPtr<ID3D12Fence> _fence, UINT64 fenceValue) {
	if (_fence->GetCompletedValue() < fenceValue) {
		_fence->SetEventOnCompletion(fenceValue, fenceEvent);
		WaitForSingleObject(fenceEvent, INFINITE);
	}
}

void FenceSystem::RenderFrame
(ComPtr<ID3D12Fence> _fence,
	ComPtr<IDXGISwapChain3> _swapChain,
	ComPtr<ID3D12CommandQueue> _commandQueue,
	UINT64 fenceValue)
{
	UINT64 fenceValues[2] = {0, 0};
	UINT currentVackBuffer = _swapChain->GetCurrentBackBufferIndex();
	UINT64 completedValue = _fence->GetCompletedValue();
	if (completedValue < fenceValues[currentVackBuffer]) {
		_fence->SetEventOnCompletion(fenceValues[currentVackBuffer], fenceEvent);
	}


	fenceValues[currentVackBuffer] = ++fenceValue;
	_commandQueue->Signal(_fence.Get(), fenceValues[currentVackBuffer]);
	
	_swapChain->Present(1,0);
}

