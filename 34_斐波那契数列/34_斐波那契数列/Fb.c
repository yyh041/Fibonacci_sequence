#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int Fb(int n)
{
	if (n > 2)
	{
		return Fb(n - 1) + Fb(n - 2);
	}
	else
	{
		return 1;
	}
}