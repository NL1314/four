#include "sub.h"
int sub(int a, int b)
{
	if (a < 0 && b>0 && (a - b) > 0)
	{
		return MIN;
	}
	else if (a > 0 && b < 0 && (a - b) < 0)
	{
		return MAX;
	}
	else
	return a - b;
}