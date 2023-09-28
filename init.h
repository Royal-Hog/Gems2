#pragma once
#include"elem.h"
#include "gametable.h"
void ScreenToOpenGL(HWND hwnd, int x, int y, float* ox, float* oy);
bool IsCellInMap(int x, int y);
LRESULT CALLBACK WindowProc(HWND, UINT, WPARAM, LPARAM);
void EnableOpenGL(HWND hwnd, HDC*, HGLRC*);
void DisableOpenGL(HWND, HDC, HGLRC);