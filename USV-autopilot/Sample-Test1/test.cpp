#include "pch.h"
#include "Source.h"
#include <iostream>

#include "../USV-autopilot/hello.h"
using namespace std;
TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}


TEST(SalutationTest, TestName) {
	hello hej = hello();
	EXPECT_EQ(hej.addTwoNumber(3, 4), 7);
}

int main(int argc, char* argv[])
{
	::testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();
}