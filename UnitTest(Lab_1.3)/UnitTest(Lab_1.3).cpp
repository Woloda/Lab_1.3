#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_1.3/FuzzyNumber.h"
#include "../Lab_1.3/Multi_and_Addit.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab13
{
	TEST_CLASS(UnitTestLab13)
	{
	public:
		
		TEST_METHOD(Test_Addit)
		{
			FuzzyNumber A, B, C;
			A.set_x(4, 5); A.set_l(5); A.set_r(4, 6);
			B.set_x(4, 3); B.set_l(3); B.set_r(4, 2);

			C = Addit(A, B);
			Assert::AreEqual(C.get_l() , 8.0);
		}
	};
}
