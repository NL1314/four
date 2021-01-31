#include "div.h"
double div(double a, double b)
{
	return (((b >= -EPSINON) && (b <= EPSINON)) ? 0 : a / b);
}