#include <d3d12.h>
#include <dxgi1_4.h>

#pragma comment(lib, "d3d12.lib")
#pragma comment(lib, "dxgi.lib")
#pragma comment(lib, "dxguid.lib")

#include <wrl/client.h>
using Microsoft::WRL::ComPtr;

#include <Windows.h>
#include "FactoryObject.h"

LRESULT CALLBACK WindowProc(
	HWND hwnd,
	UINT uMsg,
	WPARAM wParam,
	LPARAM lParam
) 
{
	HDC hdc;
	PAINTSTRUCT ps;

	switch (uMsg)
	{
	case WM_DESTROY:	//　×ボタンが押された時
		PostQuitMessage(0);	// 「アプリを終了します」とWindowsに通知
		return 0;
	case WM_PAINT:		// ウィンドウの再描画が必要な時
		// 画面を更新する処理をここに書く
		hdc = BeginPaint(hwnd, &ps);
		TextOut(hdc, 100, 100, "文字の出力", 10);
		EndPaint(hwnd, &ps);
		return 0;
	case WM_KEYDOWN:	//　キーが押された時
		//　キー入力の処理をここに書く
		return 0;
	}

	return DefWindowProc(hwnd, uMsg, wParam, lParam);
}


void EnableDebugLayer() {
#if defined(_DEBUG)
	ID3D12Debug* debugController = nullptr;
	if (SUCCEEDED(D3D12GetDebugInterface(IID_PPV_ARGS(&debugController)))) {

		debugController->EnableDebugLayer();

		ID3D12Debug1* debugController1 = nullptr;
		if (SUCCEEDED(debugController->QueryInterface(IID_PPV_ARGS(&debugController1)))) {
			debugController1->SetEnableGPUBasedValidation(TRUE);
			debugController1->Release();
		}
		debugController->Release();
	}
#endif
}

void CreateCommandList(ComPtr<ID3D12Device> _device, ComPtr<ID3D12CommandAllocator> _commandAllocators) {
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


int WINAPI WinMain(
	HINSTANCE hInstance,		//　アプリケーションの識別番号
	HINSTANCE hPrevInstance,	//　基本使わなくていい
	LPSTR lpCmdLine,			//　コマンドライン引数(起動時のオプション)
	int nCmdShow				//　ウィンドウの表示方法(最大化、最小化など)
) 
{

	//ここにメイン処理を書く
	// 1.　ウィンドウクラス登録
	WNDCLASS wc{};
	wc.lpfnWndProc = WindowProc;		//　ウィンドウプロシージャを指定
	wc.hInstance = hInstance;			//　アプリケーションインスタンス
	wc.lpszClassName = "GameWindow";	//　ウィンドウクラス名
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);		//　マウスカーソル
	wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);	//　背景色
	
	RegisterClass(&wc);		//　Windowsに登録
	
	// 2.　ウィンドウ作成
	HWND hwnd = CreateWindow(
		"GameWindow",					//　ウィンドウクラス名
		"My Game",						//　ウィンドウタイトル
		WS_OVERLAPPEDWINDOW,			//　ウィンドウスタイル
		CW_USEDEFAULT, CW_USEDEFAULT,	//　位置(自動)
		800, 600,						//　サイズ(幅、高さ)
		NULL, NULL,						//　親ウィンドウ、メニュー
		hInstance,						//　インスタンス
		NULL							//　追加データ
	);

	EnableDebugLayer();

	FactoryObject factoryObj;
	ComPtr<IDXGIFactory4> factory = factoryObj.CreateFactory();
	ComPtr<IDXGIAdapter1> adapter = factoryObj.GetHardwareAdapter(factory);
	ComPtr<ID3D12Device> device = factoryObj.CreateD3D12Dveice(factory, adapter);
	ComPtr<ID3D12CommandQueue> commandQueue = factoryObj.CreateCommandQueue(device);
	ComPtr<IDXGISwapChain3> swapChain = factoryObj.CreateSwapChain(factory, commandQueue, hwnd);

	ShowWindow(hwnd, nCmdShow);


	// 3.　メッセージループ
	MSG msg{};	//　メッセージを格納する構造体
	while (GetMessage(&msg, NULL, 0, 0))	//　メッセージが来るまで待機
	{
		TranslateMessage(&msg);	//　キーボードメッセージを使いやすい形に変換
		DispatchMessage(&msg);	//　適切なウィンドウプロシージャに送信
	}

	return 0;
}