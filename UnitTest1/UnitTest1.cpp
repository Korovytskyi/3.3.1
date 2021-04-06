#include "pch.h"
#include "CppUnitTest.h"
#include "../3.3.a/Vector3D.cpp"
#include "../3.3.a/Vector3D.h"
#include "../3.3.a/Vector.cpp"
#include "../3.3.a/Vector.h"
#include "../3.3.a/Vector2.cpp"
#include "../3.3.a/Vector2.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Vector a(3, 4 , 5);
			Assert::AreEqual(a.Distance(), 5);
		}
	};
}
