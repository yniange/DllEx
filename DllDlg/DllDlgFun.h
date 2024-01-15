#pragma once

#ifdef DLLDLGFUN_HIE
#else
#define DLLDLGFUN_HIE extern "C" _declspec(dllimport)
#endif

DLLDLGFUN_HIE int ShowDllDlg();