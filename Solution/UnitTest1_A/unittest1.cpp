#include "stdafx.h"
#include "CppUnitTest.h"
#include "../A/add.h"
#include "windows.h"
#define _CRT_SECURE_NO_WARNINGS
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace UnitTest1_A
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod_A)
		{
			// TODO:  �ڴ�������Դ���
			int a, b, c,i;
			char buf_a[10],buf_b[10],buf_c[10];
			for(i=0;i<5;i++)
			{ 
			sprintf(buf_a,"a[%d]",i);
			sprintf(buf_b, "b[%d]",i);
			sprintf(buf_c, "c[%d]",i);
			a = GetPrivateProfileInt("add", buf_a, 0, "../test.ini");
			b = GetPrivateProfileInt("add", buf_b, 0, "../test.ini");
			c = GetPrivateProfileInt("add", buf_c, 0, "../test.ini");
			/*char buf1[10] = "0", buf2[10] = "0", buf3[10] = "0";
			GetPrivateProfileString("add", "a", 0, buf1, sizeof(buf1), "../test.ini");
			GetPrivateProfileString("add", "b", 0, buf2, sizeof(buf2), "../test.ini");
			GetPrivateProfileString("add", "c", "0", buf3, sizeof(buf3), "../test.ini");
			a = atof(buf1);
			b = atof(buf2);
			c = atof(buf3);*/
			Assert::AreEqual(a, add(b, c));
			a=0;
			b=0;
			c=0;
			}
		}

	};
}