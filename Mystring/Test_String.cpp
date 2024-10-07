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
	//insert����
	cout << "insert����:" << endl;
	String str5 = "welcome to ";
	cout << "ԭʼ�ַ���: " << str5 << endl;
	const char* text_to_insert = " ShangHai University";
	str5.insert(10, text_to_insert);
	cout << "�������ַ���: " << str5 << endl;
	cout << "" << endl;
	//substr����
	cout << "substr����:" << endl;
	cout << "ԭʼ�ַ���: " << str2 << endl;
	int pos = 7;
	int n = 5;
	String result = str2.substr(pos, n);
	cout << "��ȡ���ַ���: " << result << endl;
	cout << "" << endl;
	//find����
	cout << "find����: " << endl;
	String s("Hello, World! Welcome to the C++ programming world.");
	cout << "ԭʼ�ַ���: " << s << endl;
	String toFind("World");
	int position = s.find(toFind);
	if (position != -1) {
		cout << "�ҵ����ַ��� \"" << toFind << "\" ��λ��: " << position << endl;
	}
	else {
		cout << "δ�ҵ����ַ��� \"" << toFind << "\"��" << endl;
	}
	String toFind2("test");
	int position2 = s.find(toFind2);
	if (position2 != -1) {
		cout << "�ҵ����ַ��� \"" << toFind2 << "\" ��λ��: " << position2 << endl;
	}
	else {
		cout << "δ�ҵ����ַ��� \"" << toFind2 << "\"��" << endl;
	}
	cout << "" << endl;
	//swap����
	cout << "swap����: " << endl;
	String s1 = "English";
	String s2 = "Chinese";
	cout << "s1: " << s1 << endl;
	cout << "s2: " << s2 << endl;
	s1.swap(s2);
	cout << "����֮��" << endl;
	cout << "s1: " << s1 << endl;
	cout << "s2: " << s2 << endl;
	cout << "" << endl;
	//clear����
	cout << "clear����: " << endl;
	cout << "\"" << str4 << "\"" << endl;
	str4.clear();
	cout << "\"" << str4 << "\"" << endl;
	cout << "" << endl;
	//append����
	cout << "append����: " << endl;
	string str1a("Hello ");
	cout << "The original string str1 is: " << str1a << endl;
	const char* cstr1a = "Out There ";
	cout << "The C-string cstr1a is: " << cstr1a << endl;
	str1a.append(cstr1a);
	cout << "Appending the C-string cstr1a to string str1 gives: "
		<< str1a << "." << endl << endl;
	cout << "" << endl;
	//�쳣��������������ʱ�±�Խ��
	str1[100] = 'a';

	cout << "Input a string: ";
	getline(cin, str1, 80);
	cout << "\"" << str1 << "\"" << endl;


	return 0;
}