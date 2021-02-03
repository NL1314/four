#include "mul.h"
int mul(int a, int b)
{
	if ((a > 0 && b > 0 && (MAX / a) < b) || (a < 0 && b < 0 && (MAX / abs(a)) <abs( b)))
	{
		return MAX;
	}
	else if ((a > 0 && b<0 && (MIN / a)>b) ||(a < 0 && b>0 && (MIN / b) > a))
	{
		return MIN;
	}
	else 
	return a*b;
}