#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_10.1_C++.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest101C
{
	TEST_CLASS(UnitTest101C)
	{
	public:

		TEST_METHOD(TestMethod_OpenFile_Success)
		{
			char fname[] = "t"; // Provide an existing file for the test
			bool result = OpenFile(fname);
			Assert::IsTrue(result);
		}

		TEST_METHOD(TestMethod_OpenFile_Failure)
		{
			char fname[] = "t"; // Provide a non-existing file for the test
			bool result = OpenFile(fname);
			Assert::IsFalse(result);
		}
	};
}
