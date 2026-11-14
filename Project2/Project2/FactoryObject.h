#pragma once
#include <d3d12.h>
#include <dxgi1_4.h>

#pragma comment(lib, "d3d12.lib")
#pragma comment(lib, "dxgi.lib")
#pragma comment(lib, "dxguid.lib")
#include <wrl/client.h>
using Microsoft::WRL::ComPtr;


class FactoryObject
{
public:
	ComPtr<IDXGIFactory4> CreateFactory();
	ComPtr<IDXGIAdapter1> GetHardwareAdapter(ComPtr<IDXGIFactory4> factory);
	ComPtr<ID3D12Device> CreateD3D12Dveice(ComPtr<IDXGIFactory4> factory, ComPtr<IDXGIAdapter1> adapter);
	ComPtr<ID3D12CommandQueue> CreateCommandQueue(ComPtr<ID3D12Device> device);
	ComPtr<IDXGISwapChain3> CreateSwapChain(ComPtr<IDXGIFactory4> factory, ComPtr<ID3D12CommandQueue> commandQueue, HWND hwnd);
};

