#include "pch.h"
#include "CppUnitTest.h"
#include "../Laba 5.5/Laba 5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest5
{
	TEST_CLASS(UnitTest5)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = sumDigits(002, 0);
			Assert::AreEqual(t, 2);
		}
	};
}
