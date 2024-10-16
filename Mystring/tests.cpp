
#include "tests.h"
void input(int& op) {
	cin >> op;
	while (cin.fail())                //防止错误输入。
	{
		cout << "Invalid input. Please enter a number." << endl;
		cin.clear();            // 清理错误状态位
		cin.ignore(numeric_limits<streamsize>::max(), '\n'); // 丢弃无效输入
		cin >> op;
	}
}
void testAssignment() {

	String str1 = "world.", str2, str3, str4 = "SHUSHU";
	//赋值函数测试
	cout << "赋值函数测试:" << endl;
	cout << "str1=" << "\"" << str1 << "\"" << endl;
	cout << "str2=" << "\"" << str2 << "\"" << endl;
	cout << "将str1的值赋给str2" << endl;
	str2 = str1;
	cout << "str2=" << "\"" << str2 << "\"" << endl;
	cout << "" << endl;
}

void testSubscriptOperator() {

	//方括号（下标）运算符测试
	String str1 = "world.", str2, str3, str4 = "SHUSHU";
	str2 = str1;
	cout << "方括号（下标）运算符测试:" << endl;
	str2[0] = 'W';
	cout << "str2[0]=" << "\"" << str2[0] << "\"" << endl;
	cout << "str2=" << "\"" << str2 << "\"" << endl;
	cout << "" << endl;

}
void testSubscriptOutOfBounds() {
	//异常处理：方括号运算时下标越界
	String str1 = "world.", str2, str3, str4 = "SHUSHU";
	str2 = str1;
	cout << "方括号运算下标越界测试: " << endl;
	cout << "str2=" << str2 << endl;
	try
	{
		cout << "输出str2[100]" << endl;
		cout << str2[100] << endl;
	}
	catch (int)
	{
		cout << "下标越界" << endl;
	}
	cout << "" << endl;


}
void testStringConcatenation() {
	//字符串拼接测试
	String str1 = "world.", str2, str3, str4 = "SHUSHU";
	cout << "字符串拼接测试:" << endl;
	cout << "str1=" << "\"" << str1 << "\"" << endl;
	cout << "str2=" << "\"" << str2 << "\"" << endl;
	str2 = "Hello, " + str1;
	cout << "str2=" << "\"" << str2 << "\"" << endl;
	cout << "令str1 += str2" << endl;
	str1 += str2;
	cout << "str1=" << "\"" << str1 << "\"" << endl;
	cout << "" << endl;

}
void testInsert() {
	//insert测试
	cout << "insert测试:" << endl;
	String str5 = "welcome to ";
	cout << "原始字符串: " << str5 << endl;
	const char* text_to_insert = " ShangHai University";
	str5.insert(10, text_to_insert);
	cout << "插入后的字符串: " << str5 << endl;
	cout << "" << endl;

}
void testSubstr() {
	//substr测试
	String str1 = "world.", str2, str3, str4 = "SHUSHU";
	str2 = str1;
	cout << "substr测试:" << endl;
	cout << "原始字符串: " << str2 << endl;
	int pos = 7;
	int n = 5;
	String result = str2.substr(pos, n);
	cout << "提取的字符串: " << result << endl;
	cout << "" << endl;

}
void testFind() {
	//find测试
	cout << "find测试: " << endl;
	String s("Hello, World! Welcome to the C++ programming world.");
	cout << "原始字符串: " << s << endl;
	String toFind("World");
	int position = s.find(toFind);
	if (position != -1) {
		cout << "找到子字符串 \"" << toFind << "\" 在位置: " << position << endl;
	}
	else {
		cout << "未找到子字符串 \"" << toFind << "\"。" << endl;
	}
	String toFind2("test");
	int position2 = s.find(toFind2);
	if (position2 != -1) {
		cout << "找到子字符串 \"" << toFind2 << "\" 在位置: " << position2 << endl;
	}
	else {
		cout << "未找到子字符串 \"" << toFind2 << "\"。" << endl;
	}
	cout << "" << endl;

}
void testLength() {
	String str1 = "world.", str2, str3, str4 = "SHUSHU";
	str2 = str1;
	cout << "length测试: " << endl;
	cout << "str2: " << str2 << endl;
	cout << "str2的长度: " << str2.length() << endl;
	cout << "" << endl;

}
void testCStr() {
	//c_str测试
	String str1 = "world.", str2, str3, str4 = "SHUSHU";
	str2 = str1;
	cout << "c_str测试: " << endl;
	cout << "str2: " << str2 << endl;
	cout << "str2的C-字符串: " << str2.c_str() << endl;
	cout << "" << endl;

}
void testSwap() {
	//swap测试
	cout << "swap测试: " << endl;
	String s1 = "English";
	String s2 = "Chinese";
	cout << "s1: " << s1 << endl;
	cout << "s2: " << s2 << endl;
	s1.swap(s2);
	cout << "交换之后" << endl;
	cout << "s1: " << s1 << endl;
	cout << "s2: " << s2 << endl;
	cout << "" << endl;

}
void testClear() {
	//clear测试
	String str1 = "world.", str2, str3, str4 = "SHUSHU";
	cout << "clear测试: " << endl;
	cout << "原始字符串：" << "\"" << str4 << "\"" << endl;
	str4.clear();
	cout << "清空后字符串：" << "\"" << str4 << "\"" << endl;
	cout << "" << endl;

}
void testAppend() {
	//append测试
	cout << "append测试: " << endl;
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
	//erase测试
	cout << "erase测试" << endl;
	String str6 = "Hello,world!";
	cout << "原始字符串：" << str6 << endl;
	cout << "删除从字符串str5中的位置3开始的往后5个字符" << endl;
	str6.erase(3, 5);
	cout << "删除后的字符串:" << str6 << endl;
	cout << "删除从字符串str5的位置20开始的往后20个字符(位置越界)" << endl;
	str6.erase(20, 20);
	cout << "删除后的字符串:" << str6 << endl;
	cout << "" << endl;

}
void testRelationalOperators() {
	//重载关系运算符测试
	cout << "重载关系运算符测试:" << endl;
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
	//getline函数测试
	String str1 = "world.", str2, str3, str4 = "SHUSHU";
	cout << "Input a string: " << endl;
	cin.ignore(numeric_limits<streamsize>::max(), '\n'); // 清除输入缓冲区中的换行符
	getline(cin, str1, 80);
	cout << "\"" << str1 << "\"" << endl;
	// getline函数测试的代码
}