/*
	This is the main code file of your class. This is where you will write the actual code for you class, using all the functions
	and constructors you may have defined in your header file. Note that this is where you will have your #include statements 
	as this is where you'll actually need them. 
*/

#include "YourClass.h" // this line imports the header file
#include <string>
#include <iostream>
using namespace std;

/* 
	You will notice below that EACH of these methods and constructors corresponds perfectly to ones defined in the header file
	Also notice how when we go to write the code for each of these methods and constructors that we have to use:
	returnType ClassName::MethodName() {... where returnType is something like int/string/book/etc
	because this is a different file and you need to explicitly specify the class you're working on. 
*/

YourClass::YourClass() { // default constructor. If a YourClass object is created without any arguments, this will be what runs
	testString = "This is the default message, defined within the constructor"; // default behavior of testString defined
}

YourClass::YourClass(string newString) { // constructor when passed a string as a variable. Runs when new object is created with string
	testString = newString; // the testString variable is set equal to whatever new string is given 
}

void YourClass::message() { // this class' only method
	cout << testString << endl; // prints whatever the current value of testString is
}