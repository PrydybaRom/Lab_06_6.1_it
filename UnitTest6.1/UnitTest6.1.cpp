#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_06.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61
{
	TEST_CLASS(UnitTest61)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int SIZE = 25;
			int a = -5, b = 12;
			int arr[SIZE]{};

			int n = CountArr(arr, SIZE);

			Assert::AreEqual(n, 25);

		}
	};
}
