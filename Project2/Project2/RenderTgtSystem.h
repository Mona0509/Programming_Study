#pragma once
#include <d3d12.h>
#include <dxgi1_4.h>

#pragma comment(lib, "d3d12.lib")
#pragma comment(lib, "dxgi.lib")
#pragma comment(lib, "dxguid.lib")
#include <wrl/client.h>
using Microsoft::WRL::ComPtr;


class RenderTgtSystem
{
public:
	void CreateRenderTarget(
		ComPtr<IDXGISwapChain3> _swapChain,
		ComPtr<ID3D12DescriptorHeap> _rtvHeap,
		UINT _rtvDescriptorSize,
		ComPtr<ID3D12Device> _device);
};

