#include "pch.h"
#include "Source.h"
#include <iostream>

using namespace std;
TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}


TEST(SalutationTest, Static) {
	EXPECT_EQ(string("Hello World!"), Salutation::greet("Worldd"));
}

int main(int argc, char* argv[])
{
	::testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();
}