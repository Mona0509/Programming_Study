#include "CommandAlloSystem.h"

ComPtr<ID3D12CommandAllocator> CommandAlloSystem::CreateCommandAllo(ComPtr<ID3D12Device> _device) {
	// コマンドアロケータ作成
	ComPtr<ID3D12CommandAllocator> commandAllocators[2];

	for (int i = 0; i < 2; i++) {
		_device->CreateCommandAllocator(
			D3D12_COMMAND_LIST_TYPE_DIRECT,
			IID_PPV_ARGS(&commandAllocators[i])
		);
	}
	return commandAllocators;
}
