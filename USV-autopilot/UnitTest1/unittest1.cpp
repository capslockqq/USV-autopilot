#include "CppUnitTest.h"
#include "aName.h"
#include "../USV-autopilot/hello.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			aName hej = aName();
			hej.something();
			Assert::AreEqual(2, 2);
		}

		TEST_METHOD(TestMethod2)
		{
			hello luls = hello();
			Assert::AreEqual(luls.addTwoNumber(2, 2), 5);
		}

	};
}