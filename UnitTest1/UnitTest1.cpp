#include "pch.h"
#include "CppUnitTest.h"
#include "../5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double res = s(2.0);
			double exp = 3.00863;

		    Assert::AreEqual(res, exp, 0.00001);

		}
	};
}
