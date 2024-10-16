// Test_String.cpp

#include "String.h"
#include "tests.h"
#include <iostream>

int main() {
	int choice;
	while(true) {
		cout << "\nString Class Test Menu:\n";
		cout << "1. ¸³Öµº¯Êý²âÊÔ\n";
		cout << "2. ·½À¨ºÅ£¨ÏÂ±ê£©ÔËËã·û²âÊÔ\n";
		cout << "3. ·½À¨ºÅÔËËãÏÂ±êÔ½½ç²âÊÔ\n";
		cout << "4. ×Ö·û´®Æ´½Ó²âÊÔ\n";
		cout << "5. insert²âÊÔ\n";
		cout << "6. substr²âÊÔ\n";
		cout << "7. find²âÊÔ\n";
		cout << "8. length²âÊÔ\n";
		cout << "9. c_str²âÊÔ\n";
		cout << "10. swap²âÊÔ\n";
		cout << "11. clear²âÊÔ\n";
		cout << "12. append²âÊÔ\n";
		cout << "13. erase²âÊÔ\n";
		cout << "14. ÖØÔØ¹ØÏµÔËËã·û²âÊÔ\n";
		cout << "15. getlineº¯Êý²âÊÔ\n";
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