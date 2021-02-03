#include "div.h"
int divc(int a, int b)
{
	if (b == 0)
	{
		return 0;
	}
	else if (a == MIN)
	{
		return MAX;
	}
	else
	return a / b;
}