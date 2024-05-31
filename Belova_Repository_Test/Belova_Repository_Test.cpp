#include "pch.h"
#include "CppUnitTest.h"
#include "../Belova_Repository_v1/Belova_Repository_v1.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BelovaRepositoryTest
{
	TEST_CLASS(BelovaRepositoryTest)
	{
	public:
		
		TEST_METHOD(TestVvodXEmpty)
		{
			string x = "";

			bool expected =false ;

			bool actual = VvodX(x);

			Assert::AreEqual(expected, actual, L"Неправильное значение ");
		}
		TEST_METHOD(TestVvodN)
		{
			string n = "99";

			bool expected = false;

			bool actual = VvodMenshN(n);

			Assert::AreEqual(expected, actual, L"Неправильное значение ");
		}
		TEST_METHOD(TestVvodXTrue)
		{
			string x = "958";

			bool expected = true;

			bool actual = VvodX(x);

			Assert::AreEqual(expected, actual, L"Неправильное значение ");
		}
		TEST_METHOD(TestFirsthX)
		{
			int x =578;

			int expected = 5;

			int actual = Firsth(x);

			Assert::AreEqual(expected, actual, L"Неправильное значение ");
		}
		TEST_METHOD(TestNX)
		{
			int x = 578;
			int n = 2;

			int expected = 7;

			int actual = NX(x,n);

			Assert::AreEqual(expected, actual, L"Неправильное значение ");
		}

	};
}
