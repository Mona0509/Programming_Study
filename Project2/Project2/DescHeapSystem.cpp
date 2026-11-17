#include "DescHeapSystem.h"

// ディスクリプタヒープの作成
ComPtr<ID3D12DescriptorHeap> DescHeapSystem::CreateDescriptorHeaps(ComPtr<ID3D12Device> _device) {
	D3D12_DESCRIPTOR_HEAP_DESC rtvHeapDesc = {};
	rtvHeapDesc.NumDescriptors = 2;
	rtvHeapDesc.Type = D3D12_DESCRIPTOR_HEAP_TYPE_RTV;
	rtvHeapDesc.Flags = D3D12_DESCRIPTOR_HEAP_FLAG_NONE;

	ComPtr<ID3D12DescriptorHeap> rtvHeap;
	_device->CreateDescriptorHeap(&rtvHeapDesc, IID_PPV_ARGS(&rtvHeap));
	return rtvHeap;
}

UINT DescHeapSystem::DescriptHandle(ComPtr<ID3D12DescriptorHeap> _rtvHeap, ComPtr<ID3D12Device> _device) {
	// RTVハンドル取得
	D3D12_CPU_DESCRIPTOR_HANDLE rtvHandle = _rtvHeap->GetCPUDescriptorHandleForHeapStart();
	UINT rtvDescriptorSize = _device->GetDescriptorHandleIncrementSize(D3D12_DESCRIPTOR_HEAP_TYPE_RTV);

	// 2番目のRTVハンドル計算
	rtvHandle.ptr += rtvDescriptorSize;

	return rtvDescriptorSize;
}
