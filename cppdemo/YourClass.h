/*
	The below two lines are called "header guards." These are necessary for every header files you include
	Always in this format. YOURCLASS_H mentioned below is the file name of this file, just in all caps, and 
	with the period replaced by an underscore. 
*/
#ifndef YOURCLASS_H // "[if] [n]ot [def]ined: if a header of this name is not yet defined...
#define YOURCLASS_H // then define it

class YourClass { 
	public: // defines what methods and variables will be accessable within main method, as well as from other classes
		void message(); // this is an example of a method

		YourClass(); // this is a constructor. Since it takes no argument, you can call it default constructor
		YourClass(string newString); // this is a constructor too. Takes a string as an argument
	private: // defines what methods and variables can only be used within this class
		string testString; // member variable
};

#endif
