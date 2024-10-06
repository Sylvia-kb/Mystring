// Test_String.cpp

#include "String.h"

int main()
{
	String str1 = "world.", str2, str3,str4 = "SHUSHU";

	str2 = str1;
	str2[0] = 'W';
	cout << "\"" << str1 << "\"" << endl;
	cout << "\"" << str2 << "\"" << endl;
	str2 = "Hello, " + str2;
	str1 = str1;
	//	str3 = "C++ " + "programm"; 
	str3 = String("C++ ") + "programm"; 	// OK
	str3 = "C++ " + String("programm");		// OK
	cout << "\"" << str1 << "\"" << endl;
	cout << "\"" << str2 << "\"" << endl;
	cout << "\"" << str3 << "\"" << endl;

	cout << &(str1[0]) << endl;

	//clear²âÊÔ
	cout << "\"" << str4 << "\"" << endl;
	str4.clear();
	cout << "\"" << str4 << "\"" << endl;

	//append²âÊÔ
	string str1a("Hello ");
	cout << "The original string str1 is: " << str1a << endl;
	const char* cstr1a = "Out There ";
	cout << "The C-string cstr1a is: " << cstr1a << endl;
	str1a.append(cstr1a);
	cout << "Appending the C-string cstr1a to string str1 gives: "
		<< str1a << "." << endl << endl;

	cout << "Input a string: ";
	getline(cin, str1, 80);
	cout << "\"" << str1 << "\"" << endl;

	return 0;
}
