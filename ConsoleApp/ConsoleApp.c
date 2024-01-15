
#include <stdio.h>
#include <stdlib.h>
int add(int a, int b);
//extern int add(int a, int b);
//_declspec(dllimport) int add(int a, int b);

//#include "DllDlgFun.h"

int main()
{
	int ShowDllDlg();
	printf("%d", ShowDllDlg());
	system("pause");
}
