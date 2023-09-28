#include "init.h"
#pragma comment(lib, "opengl32.lib")

extern GameTable* map;


int WINAPI WinMain(HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR lpCmdLine,
	int nCmdShow)
{
	WNDCLASSEX wcex;
	HWND hwnd;
	HDC hDC;
	HGLRC hRC;
	MSG msg;
	BOOL bQuit = FALSE;
	float theta = 0.0f;

	wcex.cbSize = sizeof(WNDCLASSEX);
	wcex.style = CS_OWNDC;
	wcex.lpfnWndProc = WindowProc;
	wcex.cbClsExtra = 0;
	wcex.cbWndExtra = 0;
	wcex.hInstance = hInstance;
	wcex.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wcex.hCursor = LoadCursor(NULL, IDC_ARROW);
	wcex.hbrBackground = (HBRUSH)GetStockObject(BLACK_BRUSH);
	wcex.lpszMenuName = NULL;
	wcex.lpszClassName = "GLSample";
	wcex.hIconSm = LoadIcon(NULL, IDI_APPLICATION);;


	RegisterClassEx(&wcex);
		


	hwnd = CreateWindowEx(0,
		"GLSample",
		"OpenGL Sample",
		WS_OVERLAPPEDWINDOW,
		CW_USEDEFAULT,
		CW_USEDEFAULT,
		512,
		512,
		NULL,
		NULL,
		hInstance,
		NULL);

	ShowWindow(hwnd, nCmdShow);



	EnableOpenGL(hwnd, &hDC, &hRC);
	map = new GameTable(mapH, mapW);


	while (!bQuit)
	{

		if (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE))
		{
		
			if (msg.message == WM_QUIT)
			{
				bQuit = TRUE;
			}
			else
			{
				
				DispatchMessage(&msg);
			}
		}
		else
		{ 


			glClearColor(0.7f, 1.0f, 0.7f, 0.0f);
			glClear(GL_COLOR_BUFFER_BIT);

			map->BuildTable();
			map->ReplaceElem();
			map->CheckColumnsTable();
			map->CheckRowsTable();
			map->KaBOOM();
			map->REColorBonus();

			SwapBuffers(hDC);

			Sleep(200);
		}
	}

	DisableOpenGL(hwnd, hDC, hRC);


	DestroyWindow(hwnd);

	return msg.wParam;
}

