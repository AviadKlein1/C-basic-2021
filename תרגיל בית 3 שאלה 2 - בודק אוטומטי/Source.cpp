// name: Aviad Klein ID: 315552679
// Intro to computer science
// 3.2
// the program gets range of two numbers and check where number is. 

#include <iostream>
using namespace std;

int main()
{
	int first, last, number;
	
	cout << "enter 3 numbers:" << endl;
	cin >> first >> last >> number;

	if (number >= first && number <= last) cout << "between" << endl;
	else if (number < first) cout << "smaller" << endl;
	else if (number > last) cout << "bigger" << endl;

	return 0;
}

/*
 enter 3 numbers:
3 9 7
between
*/
