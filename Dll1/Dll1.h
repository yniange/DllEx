#pragma once

#ifdef DLL1_HIE
#else
#define DLL1_HIE extern "C" _declspec(dllimport)
#endif

DLL1_HIE int add(int a, int b);
DLL1_HIE int subtract(int a, int b);
