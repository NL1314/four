#include "stdafx.h"
#include "CppUnitTest.h"
#include "../B/sub.h"
#include "windows.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest_B
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// TODO:  �ڴ�������Դ���
			double  a, b, c;
			char buf1[10] = "0", buf2[10] = "0", buf3[10] = "0";
			GetPrivateProfileString("sub", "a", "0", buf1, sizeof(buf1), "../test.ini");
			GetPrivateProfileString("sub", "b", "0", buf2, sizeof(buf2), "../test.ini");
			GetPrivateProfileString("sub", "c", "0", buf3, sizeof(buf3), "../test.ini");
			a = atof(buf1);
			b = atof(buf2);
			c = atof(buf3);

			Assert::AreEqual(a, sub(b, c));
		}

	};
}