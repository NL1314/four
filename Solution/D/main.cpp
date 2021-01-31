#include "div.h"
int main()
{
	HMODULE hdll = LoadLibrary("../Debug/C.dll");
	LoadProc mul = (LoadProc)GetProcAddress(hdll, "mul");
	double  x = 0, y = 0, z = 0;
	char op = ' ', ch = ' ';
	scanf("%lf%c%lf", &x, &op, &y);
	switch (op)
	{
	case '+':z = add(x, y); break;
	case '-':z = sub(x, y); break;
	case '*':z = mul(x, y); break;
	case '/':z = div(x, y); break;
	default: break;
	}
	printf("%f\n", z);
	FreeLibrary(hdll);
	return 0;
}