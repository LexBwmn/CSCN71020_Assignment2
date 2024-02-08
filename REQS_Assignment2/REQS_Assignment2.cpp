#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int, int);
extern "C" int getArea(int, int);
extern "C" void setLength(int, int);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace REQSAssignment2
{
	TEST_CLASS(REQSAssignment2)
	{
	public:
		
		TEST_METHOD(getPerimeterFunctionality)
		{
			// This is testing the getPerimter Functionality using using 2(3 + 6) 
		    int Result = 0;
			Result = getPerimeter(3,6);
			Assert::AreEqual(20, Result);

		}

		TEST_METHOD(getAreaFunctionality)
		{
			// testing area of rec. using 6 * 2 
			int Result = 0; 
			Result = getArea(6, 2);
			Assert::AreEqual(8, Result);
		}

		TEST_METHOD(setLengthFunctionalityHighLimit)
		{
			// testing this function by hard coding some variable as the high limit (100), and then trying to enter a number over that
			int MAXNUM = 100;
			int inputTooHigh = 115;
			Assert::IsFalse(inputTooHigh > MAXNUM);
		}

		TEST_METHOD(setLengthFunctionalityLowLimit)
		{
			int MINNUM = 0;
			int inputTooLow = -3;
			Assert::IsFalse(inputTooLow < MINNUM);
		}

		TEST_METHOD(TestMethod5)
		{
		}

		TEST_METHOD(TestMethod6)
		{
		}

		TEST_METHOD(TestMethod8)
		{
		}
	
	};
}
