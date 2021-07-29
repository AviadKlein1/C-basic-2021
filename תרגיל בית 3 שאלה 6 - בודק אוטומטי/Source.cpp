// name: Aviad Klein ID: 315552679
// Intro to computer science
// 3.6
// the program gets a number of month and replys back it's day's number.

#include <iostream>
using namespace std;

enum MONTH {JAN, FEB, MARCH, APRIL, MAY, JUNE, JULY, AUG, SEPT, OCT, NOV, DEC };

int main()
{
	int x;
	cout << "enter a number:\n";
	cin >> x;
	x--;
	switch (x)
	{
	case JAN:
	case MARCH:
	case MAY: 
	case JULY: 
	case AUG: 
	case OCT: 
	case DEC: cout << "31 days in the month";
		break;
	case APRIL:
	case JUNE: 
	case NOV:	
	case SEPT: cout << "30 days in the month";
		break;
	case FEB: cout << "28 days in the month";
		break;
	default:cout << "ERROR";
		
	}	
	return 0;
}

/*
enter a number:
3
31 days in the month
*/
