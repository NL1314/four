#include "windows.h"
#include "add.h"
#include "sub.h"
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define EPSINON   0.000001
typedef double(*LoadProc)(double x, double y);
double div(double a, double b);