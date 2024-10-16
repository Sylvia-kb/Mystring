
#include "tests.h"
void input(int& op) {
	cin >> op;
	while (cin.fail())                //��ֹ�������롣
	{
		cout << "Invalid input. Please enter a number." << endl;
		cin.clear();            // �������״̬λ
		cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ������Ч����
		cin >> op;
	}
}
void testAssignment() {

	String str1 = "world.", str2, str3, str4 = "SHUSHU";
	//��ֵ��������
	cout << "��ֵ��������:" << endl;
	cout << "str1=" << "\"" << str1 << "\"" << endl;
	cout << "str2=" << "\"" << str2 << "\"" << endl;
	cout << "��str1��ֵ����str2" << endl;
	str2 = str1;
	cout << "str2=" << "\"" << str2 << "\"" << endl;
	cout << "" << endl;
}

void testSubscriptOperator() {

	//�����ţ��±꣩���������
	String str1 = "world.", str2, str3, str4 = "SHUSHU";
	str2 = str1;
	cout << "�����ţ��±꣩���������:" << endl;
	str2[0] = 'W';
	cout << "str2[0]=" << "\"" << str2[0] << "\"" << endl;
	cout << "str2=" << "\"" << str2 << "\"" << endl;
	cout << "" << endl;

}
void testSubscriptOutOfBounds() {
	//�쳣��������������ʱ�±�Խ��
	String str1 = "world.", str2, str3, str4 = "SHUSHU";
	str2 = str1;
	cout << "�����������±�Խ�����: " << endl;
	cout << "str2=" << str2 << endl;
	try
	{
		cout << "���str2[100]" << endl;
		cout << str2[100] << endl;
	}
	catch (int)
	{
		cout << "�±�Խ��" << endl;
	}
	cout << "" << endl;


}
void testStringConcatenation() {
	//�ַ���ƴ�Ӳ���
	String str1 = "world.", str2, str3, str4 = "SHUSHU";
	cout << "�ַ���ƴ�Ӳ���:" << endl;
	cout << "str1=" << "\"" << str1 << "\"" << endl;
	cout << "str2=" << "\"" << str2 << "\"" << endl;
	str2 = "Hello, " + str1;
	cout << "str2=" << "\"" << str2 << "\"" << endl;
	cout << "��str1 += str2" << endl;
	str1 += str2;
	cout << "str1=" << "\"" << str1 << "\"" << endl;
	cout << "" << endl;

}
void testInsert() {
	//insert����
	cout << "insert����:" << endl;
	String str5 = "welcome to ";
	cout << "ԭʼ�ַ���: " << str5 << endl;
	const char* text_to_insert = " ShangHai University";
	str5.insert(10, text_to_insert);
	cout << "�������ַ���: " << str5 << endl;
	cout << "" << endl;

}
void testSubstr() {
	//substr����
	String str1 = "world.", str2, str3, str4 = "SHUSHU";
	str2 = str1;
	cout << "substr����:" << endl;
	cout << "ԭʼ�ַ���: " << str2 << endl;
	int pos = 7;
	int n = 5;
	String result = str2.substr(pos, n);
	cout << "��ȡ���ַ���: " << result << endl;
	cout << "" << endl;

}
void testFind() {
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

}
void testLength() {
	String str1 = "world.", str2, str3, str4 = "SHUSHU";
	str2 = str1;
	cout << "length����: " << endl;
	cout << "str2: " << str2 << endl;
	cout << "str2�ĳ���: " << str2.length() << endl;
	cout << "" << endl;

}
void testCStr() {
	//c_str����
	String str1 = "world.", str2, str3, str4 = "SHUSHU";
	str2 = str1;
	cout << "c_str����: " << endl;
	cout << "str2: " << str2 << endl;
	cout << "str2��C-�ַ���: " << str2.c_str() << endl;
	cout << "" << endl;

}
void testSwap() {
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

}
void testClear() {
	//clear����
	String str1 = "world.", str2, str3, str4 = "SHUSHU";
	cout << "clear����: " << endl;
	cout << "ԭʼ�ַ�����" << "\"" << str4 << "\"" << endl;
	str4.clear();
	cout << "��պ��ַ�����" << "\"" << str4 << "\"" << endl;
	cout << "" << endl;

}
void testAppend() {
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

}
void testErase() {
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

}
void testRelationalOperators() {
	//���ع�ϵ���������
	cout << "���ع�ϵ���������:" << endl;
	String str7 = "Hello";
	String str8 = "World";
	cout << "str7=" << "\"" << str7 << "\"" << endl;
	cout << "str8=" << "\"" << str8 << "\"" << endl;
	cout << "str7 == str8: " << (str7 == str8) << endl;
	cout << "str7 != str8: " << (str7 != str8) << endl;
	cout << "str7 > str8: " << (str7 > str8) << endl;
	cout << "str7 >= str8: " << (str7 >= str8) << endl;
	cout << "str7 < str8: " << (str7 < str8) << endl;
	cout << "str7 <= str8: " << (str7 <= str8) << endl;
	cout << "" << endl;

}

void testGetLine() {
	//getline��������
	String str1 = "world.", str2, str3, str4 = "SHUSHU";
	cout << "Input a string: " << endl;
	cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ������뻺�����еĻ��з�
	getline(cin, str1, 80);
	cout << "\"" << str1 << "\"" << endl;
	// getline�������ԵĴ���
}