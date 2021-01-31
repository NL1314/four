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
		
		TEST_METHOD(TestMethod1)
		{
			// TODO:  在此输入测试代码
			double a, b, c;
			char buf1[10] = "0", buf2[10] = "0", buf3[10] = "0";
			GetPrivateProfileString("mul", "a", 0, buf1, sizeof(buf1), "../test.ini");
			GetPrivateProfileString("mul", "b", 0, buf2, sizeof(buf2), "../test.ini");
			GetPrivateProfileString("mul", "c", "0", buf3, sizeof(buf3), "../test.ini");
			a = atof(buf1);
			b = atof(buf2);
			c = atof(buf3);
			Assert::AreEqual(a, mul(b, c));
		}

	};
}