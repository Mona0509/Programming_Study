#include "RenderTgtSystem.h"

void RenderTgtSystem::CreateRenderTarget(
	ComPtr<IDXGISwapChain3> _swapChain,
	ComPtr<ID3D12DescriptorHeap> _rtvHeap,
	UINT _rtvDescriptorSize,
	ComPtr<ID3D12Device> _device)
{
	// レンダーターゲット作成
	ComPtr<ID3D12Resource> renderTargets[2];

	for (int i = 0; i < 2; i++) {
		// スワップチェンからバッファを取得
		_swapChain->GetBuffer(i, IID_PPV_ARGS(&renderTargets[i]));

		// RTVハンドルの計算
		D3D12_CPU_DESCRIPTOR_HANDLE rtvHandle = _rtvHeap->GetCPUDescriptorHandleForHeapStart();
		rtvHandle.ptr += i * _rtvDescriptorSize;

		// RTVの作成
		_device->CreateRenderTargetView(renderTargets[i].Get(), nullptr, rtvHandle);
	}
}
