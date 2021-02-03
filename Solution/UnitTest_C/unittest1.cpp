#include "stdafx.h"
#include "CppUnitTest.h"
#include "../C/mul.h"
#include "windows.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest_C
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod_C)
		{
			// TODO:  在此输入测试代码
			int a, b, c, i;
			char buf_a[10], buf_b[10], buf_c[10];
			for (i = 0;i<5;i++)
			{
				sprintf(buf_a, "a[%d]", i);
				sprintf(buf_b, "b[%d]", i);
				sprintf(buf_c, "c[%d]", i);
				a = GetPrivateProfileInt("mul", buf_a, 0, "../test.ini");
				b = GetPrivateProfileInt("mul", buf_b, 0, "../test.ini");
				c = GetPrivateProfileInt("mul", buf_c, 0, "../test.ini");
				Assert::AreEqual(a, mul(b, c));
				a = 0;
				b = 0;
				c = 0;
			}
		}

	};
}