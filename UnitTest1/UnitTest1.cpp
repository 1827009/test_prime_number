#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::IsTrue(!is_prime_number(1));
			Assert::IsTrue(!is_prime_number(2));
			Assert::IsTrue(!is_prime_number(3));
			Assert::IsTrue(!is_prime_number(5));
			Assert::IsTrue(!is_prime_number(7));
		}
	};
}
