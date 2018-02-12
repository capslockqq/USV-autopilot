#include "pch.h"
#include "Source.h"
#include <iostream>

using namespace std;
TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}


TEST(SalutationTest, Static) {
	EXPECT_EQ(string("Hello World!"), Salutation::greet("World"));
}

int main()
{
	RUN_ALL_TESTS();
	return 0;
}