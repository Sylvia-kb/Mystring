// Test_String.cpp

#include "String.h"

int main()
{
	String str1 = "world.", str2, str3, str4 = "SHUSHU";
	//��ֵ��������
	cout << "��ֵ��������:" << endl;
	cout << "str1=" << "\"" << str1 << "\"" << endl;
	cout << "str2=" << "\"" << str2 << "\"" << endl;
	cout << "��str1��ֵ����str2" << endl;
	str2 = str1;
	cout << "str2=" << "\"" << str2 << "\"" << endl;
	cout << "" << endl;
	
	//�����ţ��±꣩���������
	cout << "�����ţ��±꣩���������:" << endl;
	str2[0] = 'W';
	cout << "str2[0]=" << "\"" << str2[0] << "\"" << endl;
	cout <<"str2=" << "\"" << str2 << "\"" << endl;
	cout << "" << endl;

	//�쳣��������������ʱ�±�Խ��
	cout << "�����������±�Խ�����: " << endl;
	cout << "���str2��" << str2 << endl;
	try
	{
		cout << "���str2[100]" << str2[100] << endl;
	}
	catch (int)
	{
		cout << "�±�Խ��" << endl;
	}
	cout << "" << endl;

	//�ַ���ƴ�Ӳ���
	cout << "�ַ���ƴ�Ӳ���:" << endl;
	cout << "str1=" << "\"" << str1 << "\"" << endl;
	cout << "str2=" << "\"" << str2 << "\"" << endl;
	str2 = "Hello, " + str1;
	cout << "str2=" << "\"" << str2 << "\"" << endl;
	cout << "��str1 += str2" << endl;
	str1 += str2;
	cout << "str1=" << "\"" << str1 << "\"" << endl;
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

	//length����
	cout << "length����: " << endl;
	cout << "str2: " << str2 << endl;
	cout << "str2�ĳ���: " << str2.length() << endl;
	cout << "" << endl;

	//c_str����
	cout << "c_str����: " << endl;
	cout << "str2: " << str2 << endl;
	cout << "str2��C-�ַ���: " << str2.c_str() << endl;
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

	//erase����
	cout << "erase����" << endl;
	String str6 = "Hello,world!";
	cout << "ԭʼ�ַ�����" << str6 << endl;
	cout << "ɾ�����ַ���str5�е�λ��3��ʼ������5���ַ�" << endl;
	str6.erase(3, 5);
	cout << "ɾ������ַ���:" << str6 << endl;
	cout << "ɾ�����ַ���str5��λ��20��ʼ������20���ַ�(λ��Խ��)" << endl;
	str6.erase(20, 20);
	cout << "ɾ������ַ���:" << str6 << endl;
	cout << "" << endl;

	
	//getline��������
	cout << "Input a string: ";
	getline(cin, str1, 80);
	cout << "\"" << str1 << "\"" << endl;

	return 0;
}