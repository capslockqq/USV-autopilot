#include "pch.h"
#include "Source.h"

#include <iostream>

using namespace std;
TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

string Salutation::greet(const string& name) {
	ostringstream s;
	s << "Hello " << name << "!";
	return s.str();
}

TEST(SalutationTest, Static) {
	EXPECT_EQ(string("Hello World!"), Salutation::greet("World"));
}