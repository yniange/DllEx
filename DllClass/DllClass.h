#pragma once

#ifdef DLL_CLASS_HIE
#else
#define DLL_CLASS_HIE _declspec(dllimport)
#endif

class DLL_CLASS_HIE Point
{
public:
	void /*DLL_CLASS_HIE*/ output(int x, int y);
	void TestMethod();
};