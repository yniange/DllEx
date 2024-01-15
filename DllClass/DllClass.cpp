#include "pch.h"

#define DLL_CLASS_HIE _declspec(dllexport)
#include "DllClass.h"
#include <tchar.h>

void Point::output(int x, int y)
{
	HWND hwnd = GetForegroundWindow();
	HDC hdc = GetDC(hwnd);
	TCHAR buf[20] = { 0 };
	_stprintf_s(buf, _T("x=%d,y=%d"), x, y);
	TextOut(hdc, x, y, buf, static_cast<int>(_tcslen(buf)));
	ReleaseDC(hwnd, hdc);
}

void Point::TestMethod()
{
}
