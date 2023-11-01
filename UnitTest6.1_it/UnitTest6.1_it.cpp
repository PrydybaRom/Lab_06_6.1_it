#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_06.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61it
{
	TEST_CLASS(UnitTest61it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int SIZE = 25;
			int a = -5, b = 12;
			int arr[SIZE]{};

			FullArr(arr, SIZE);

		}
	};
}
