#pragma once
#include <d3d12.h>
#include <wrl/client.h>

using Microsoft::WRL::ComPtr;

class TrianlePolygon
{
public:
	TrianlePolygon() = default;
	~TrianlePolygon();

	bool Create(const ComPtr<ID3D12Device> device)noexcept;
	void Draw(const ComPtr<ID3D12GraphicsCommandList>)noexcept;

private:
	bool CreateVertexBuffer(const ComPtr<ID3D12Device>)noexcept;

	bool CreateIndexBuffer(const ComPtr<ID3D12Device>)noexcept;

private:
	ID3D12Resource* vertexBuffer_{};
	ID3D12Resource* indexBuffer_{};

	D3D12_VERTEX_BUFFER_VIEW vertexBufferView_ = {};
	D3D12_INDEX_BUFFER_VIEW indexBufferVies_ = {};
};

