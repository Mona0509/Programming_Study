#pragma once
#include <d3d12.h>
#include <dxgi1_4.h>
#include <wrl/client.h>

using Microsoft::WRL::ComPtr;

class FenceSystem
{
public:
	ComPtr<ID3D12Fence> CreatesFence(ComPtr<ID3D12Device> _device);
	void WaitFence(ComPtr<ID3D12Fence> _fence, UINT64 fenceValue);
	void RenderFrame(ComPtr<ID3D12Fence> _fence,
		ComPtr<IDXGISwapChain3> _swapChain,
		ComPtr<ID3D12CommandQueue> _commandQueue,
		UINT64 fenceValue)
		;
private:
	HANDLE fenceEvent;
};

