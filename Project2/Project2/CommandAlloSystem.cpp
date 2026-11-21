#include "CommandAlloSystem.h"

void CommandAlloSystem::CreateCommandAllo(ComPtr<ID3D12Device> _device) {
	// コマンドアロケータ作成

	for (int i = 0; i < 2; i++) {
		_device->CreateCommandAllocator(
			D3D12_COMMAND_LIST_TYPE_DIRECT,
			IID_PPV_ARGS(commandAllocators[i])
		);
	}
}
