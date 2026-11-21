#pragma once
#include <d3d12.h>
#include <dxgi1_4.h>

#include <wrl/client.h>
using Microsoft::WRL::ComPtr;


class RenderTgtSystem
{
public:
	ComPtr<ID3D12Resource> CreateRenderTarget(
		ComPtr<IDXGISwapChain3> _swapChain,
		ComPtr<ID3D12DescriptorHeap> _rtvHeap,
		UINT _rtvDescriptorSize,
		ComPtr<ID3D12Device> _device);
};

