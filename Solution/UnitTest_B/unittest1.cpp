#include "stdafx.h"
#include "CppUnitTest.h"
#include "../B/sub.h"
#include "windows.h"
#define _CRT_SECURE_NO_WARNINGS
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest_B
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod_B)
		{
			// TODO:  �ڴ�������Դ���
			int a, b, c, i;
			char buf_a[10], buf_b[10], buf_c[10];
			for (i = 0;i<5;i++)
			{
				sprintf(buf_a, "a[%d]", i);
				sprintf(buf_b, "b[%d]", i);
				sprintf(buf_c, "c[%d]", i);
				a = GetPrivateProfileInt("sub", buf_a, 0, "../test.ini");
				b = GetPrivateProfileInt("sub", buf_b, 0, "../test.ini");
				c = GetPrivateProfileInt("sub", buf_c, 0, "../test.ini");
			Assert::AreEqual(a, sub(b, c));
			a=0;
			b=0;
			c=0;
			}
		}

	};
}