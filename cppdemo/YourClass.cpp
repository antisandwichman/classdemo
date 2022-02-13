#include "YourClass.h"
#include <string>
#include <iostream>
using namespace std;

YourClass::YourClass() {
	testString = "This is the default message, defined within the constructor";
}

YourClass::YourClass(string newString) {

}

void YourClass::message() {
	cout << testString << endl;
}