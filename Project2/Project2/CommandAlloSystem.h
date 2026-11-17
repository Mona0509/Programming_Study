#pragma once
#include <d3d12.h>

#include <wrl/client.h>
using Microsoft::WRL::ComPtr;

class CommandAlloSystem
{
public:
	ComPtr<ID3D12CommandAllocator> CreateCommandAllo(ComPtr<ID3D12Device> _device);
};

