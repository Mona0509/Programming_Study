#include "CommandListSystem.h"

void CommandListSystem::CreateCommandLists(ComPtr<ID3D12Device> _device, ComPtr<ID3D12CommandAllocator> _commandAllocators) {
	ComPtr<ID3D12GraphicsCommandList> commandList;
	_device->CreateCommandList(
		0,
		D3D12_COMMAND_LIST_TYPE_DIRECT,
		_commandAllocators.Get(),
		nullptr,
		IID_PPV_ARGS(&commandList)
	);

	commandList->Close();
}
