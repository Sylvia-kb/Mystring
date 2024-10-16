// Test_String.cpp

#include "String.h"
#include "tests.h"
#include <iostream>

int main() {
	int choice;
	while(true) {
		cout << "\nString Class Test Menu:\n";
		cout << "1. ��ֵ��������\n";
		cout << "2. �����ţ��±꣩���������\n";
		cout << "3. �����������±�Խ�����\n";
		cout << "4. �ַ���ƴ�Ӳ���\n";
		cout << "5. insert����\n";
		cout << "6. substr����\n";
		cout << "7. find����\n";
		cout << "8. length����\n";
		cout << "9. c_str����\n";
		cout << "10. swap����\n";
		cout << "11. clear����\n";
		cout << "12. append����\n";
		cout << "13. erase����\n";
		cout << "14. ���ع�ϵ���������\n";
		cout << "15. getline��������\n";
		cout << "0. Exit\n";
		cout << "Enter your choice: ";
	
		input(choice);

		switch (choice) {
		case 1:
			testAssignment();
			break;
		case 2:
			testSubscriptOperator();
			break;
		case 3:
			testSubscriptOutOfBounds();
			break;
		case 4:
			testStringConcatenation();
			break;
		case 5:
			testInsert();
			break;
		case 6:
			testSubstr();
			break;
		case 7:
			testFind();
			break;
		case 8:
			testLength();
			break;
		case 9:
			testCStr();
			break;
		case 10:
			testSwap();
			break;
		case 11:
			testClear();
			break;
		case 12:
			testAppend();
			break;
		case 13:
			testErase();
			break;
		case 14:
			testRelationalOperators();
			break;
		case 15:
			testGetLine();
			break;
		case 0:
			std::cout << "Exiting tests.\n";
			return 0;
			
		default:
			std::cout << "Invalid choice. Please try again.\n";
		}
	} ;

	return 0;
}