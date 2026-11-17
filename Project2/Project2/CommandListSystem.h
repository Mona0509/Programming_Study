#pragma once
#include <d3d12.h>
#include <wrl/client.h>

using Microsoft::WRL::ComPtr;

class CommandListSystem
{
public:
	void CreateCommandLists(ComPtr<ID3D12Device> _device, ComPtr<ID3D12CommandAllocator> _commandAllocators);
};

