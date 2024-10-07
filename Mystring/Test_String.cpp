// Test_String.cpp

#include "String.h"

int main()
{
	String str1 = "world.", str2, str3, str4 = "SHUSHU";

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
	cout << "" << endl;
	//insert²âÊÔ
	cout << "insert²âÊÔ:" << endl;
	String str5 = "welcome to ";
	cout << "Ô­Ê¼×Ö·û´®: " << str5 << endl;
	const char* text_to_insert = " ShangHai University";
	str5.insert(10, text_to_insert);
	cout << "²åÈëºóµÄ×Ö·û´®: " << str5 << endl;
	cout << "" << endl;
	//substr²âÊÔ
	cout << "substr²âÊÔ:" << endl;
	cout << "Ô­Ê¼×Ö·û´®: " << str2 << endl;
	int pos = 7;
	int n = 5;
	String result = str2.substr(pos, n);
	cout << "ÌáÈ¡µÄ×Ö·û´®: " << result << endl;
	cout << "" << endl;
	//find²âÊÔ
	cout << "find²âÊÔ: " << endl;
	String s("Hello, World! Welcome to the C++ programming world.");
	cout << "Ô­Ê¼×Ö·û´®: " << s << endl;
	String toFind("World");
	int position = s.find(toFind);
	if (position != -1) {
		cout << "ÕÒµ½×Ó×Ö·û´® \"" << toFind << "\" ÔÚÎ»ÖÃ: " << position << endl;
	}
	else {
		cout << "Î´ÕÒµ½×Ó×Ö·û´® \"" << toFind << "\"¡£" << endl;
	}
	String toFind2("test");
	int position2 = s.find(toFind2);
	if (position2 != -1) {
		cout << "ÕÒµ½×Ó×Ö·û´® \"" << toFind2 << "\" ÔÚÎ»ÖÃ: " << position2 << endl;
	}
	else {
		cout << "Î´ÕÒµ½×Ó×Ö·û´® \"" << toFind2 << "\"¡£" << endl;
	}
	cout << "" << endl;
	//swap²âÊÔ
	cout << "swap²âÊÔ: " << endl;
	String s1 = "English";
	String s2 = "Chinese";
	cout << "s1: " << s1 << endl;
	cout << "s2: " << s2 << endl;
	s1.swap(s2);
	cout << "½»»»Ö®ºó" << endl;
	cout << "s1: " << s1 << endl;
	cout << "s2: " << s2 << endl;
	cout << "" << endl;
	//clear²âÊÔ
	cout << "clear²âÊÔ: " << endl;
	cout << "\"" << str4 << "\"" << endl;
	str4.clear();
	cout << "\"" << str4 << "\"" << endl;
	cout << "" << endl;
	//append²âÊÔ
	cout << "append²âÊÔ: " << endl;
	string str1a("Hello ");
	cout << "The original string str1 is: " << str1a << endl;
	const char* cstr1a = "Out There ";
	cout << "The C-string cstr1a is: " << cstr1a << endl;
	str1a.append(cstr1a);
	cout << "Appending the C-string cstr1a to string str1 gives: "
		<< str1a << "." << endl << endl;
	cout << "" << endl;
	//Òì³£´¦Àí£º·½À¨ºÅÔËËãÊ±ÏÂ±êÔ½½ç
	str1[100] = 'a';

	cout << "Input a string: ";
	getline(cin, str1, 80);
	cout << "\"" << str1 << "\"" << endl;


	return 0;
}