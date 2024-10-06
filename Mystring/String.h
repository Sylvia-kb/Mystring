// String.h
#ifndef MY_STRING_H
#define MY_STRING_H
#include <iostream>
using namespace std;

class String
{
public:
	String(const char* s = "");						// ���캯��
	String(const String& Str, int pos, int n);
	String(const char* s, int n);
	String(int n, char c);
	String(const String& Str);						// �������캯��
	String& operator=(const String& Str);			// ����Ϊ��Ա����
	virtual ~String();								// �����������麯����

	
	int find(const String& Str) const;				// ���Ҳ����� Str �ڱ����е�һ�γ��ֵ�λ��
	int length() const;							// ���ش��ĳ��ȣ��ַ�������
	const char* c_str();							// ת��Ϊ C-�ַ���
	void swap(String& Str);							// �������� Str ����
	void clear();									// ���String
	String& append(const char* s);                  //���ַ�����ĩβ����ַ�


	char& operator[](int index);					// �����ţ��±꣩����������÷��ؿ�����ֵ����ֵ
	friend String operator+(const String& str1, const String& Str2); // ��Ԫ�������ַ���ƴ��
	String& operator+=(const String& Str);			// �ַ���ƴ�Ӽ���ֵ
	
	// ���ع�ϵ����
	friend bool operator==(const String& Str1, const String& Str2);
	friend bool operator!=(const String& Str1, const String& Str2);
	friend bool operator> (const String& Str1, const String& Str2);
	friend bool operator>=(const String& Str1, const String& Str2);
	friend bool operator< (const String& Str1, const String& Str2);
	friend bool operator<=(const String& Str1, const String& Str2);
	// ���� I/O �������
	friend ostream& operator<<(ostream& out, const String& Str);
	friend istream& operator>>(istream& in, String& Str);
	// ���ӵĳ�Ա����
	friend istream& getline(istream& in, String& Str, int num, char delim = '\n');
	String& trim();								// ɾ���ַ���ǰ��Ŀհף��ո��Ʊ��ַ�

private:
	char* str;
};

#endif

