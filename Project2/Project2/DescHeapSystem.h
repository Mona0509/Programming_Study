#pragma once
#include <d3d12.h>
#include <wrl/client.h>

using Microsoft::WRL::ComPtr;

class DescHeapSystem
{
public:
	// ディスクリプタヒープの作成
	ComPtr<ID3D12DescriptorHeap> CreateDescriptorHeap(ComPtr<ID3D12Device> _device);
	UINT DescriptHandle(ComPtr<ID3D12DescriptorHeap> _rtvHeap, ComPtr<ID3D12Device> _device);
};

