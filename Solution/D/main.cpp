#include "div.h"

int main()
{
	HMODULE hdll = LoadLibrary("../Debug/C.dll");
	if(hdll)
	{
		typedef int(*LoadProc)(int x, int y);
		LoadProc mul = (LoadProc)GetProcAddress(hdll, "mul");
		int  x = 0, y = 0, z = 0;
		char op = ' ';
		while(1)
		{
			scanf("%d%c%d", &x, &op, &y);
			switch (op)
			{
			case '+':z = add(x,y); break;
			case '-':z = sub(x,y); break;
			case '*':z = mul(x,y); break;
			case '/':z = divc(x,y); break;
			default: break;
			}
			printf("%d\n", z);
			
		}
		FreeLibrary(hdll);
	}
	return 0;
}