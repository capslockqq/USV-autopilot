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

int main(int argc, char* argv[])
{
	::testing::InitGoogleTest(&argc, argv);
	if (RUN_ALL_TESTS() == 0)
	{
		cout << "SUCCESS" << endl;
	}
	else
	{;
		cout << "FAIL" << endl;
	}

	return 0;
}