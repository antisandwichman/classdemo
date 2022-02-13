

#include <string>
#include <iostream>
#include "YourClass.h"
using namespace std;

int main() {
	YourClass test1; // One way to create an object of your class
	YourClass test2 = YourClass(); // Second way of creating your object
	YourClass test3 = YourClass("This is the test3 object"); // Third way, utilizing the constructor which takes a string argument
	
	test1.message(); // prints the testString variable for the test1 object
	test2.message(); // same but for the test2 object
	test3.message(); // same but for the test3 object

}