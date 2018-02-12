
#include "pch.h"
#include "Source.h"

using namespace std;

string Salutation::greet(const string& name) {
	ostringstream s;
	s << "Hello " << name << "!";
	return s.str();
}
