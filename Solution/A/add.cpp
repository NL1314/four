#include "add.h"
int add(int a, int b)
{
	if (a > 0 && b > 0 && (a + b) < 0)
	{
		return MAX;
	}
	else if (a < 0 && b < 0 && (a + b)>0)
	{
		return MIN;
	}
	else
	return a + b;
}
