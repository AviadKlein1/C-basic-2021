// name: Aviad Klein ID: 315552679
// Intro to computer science
// 3.4
// the program gets 3 numbers and check if they can form a triangle, and which type of it

#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout << "enter 3 numbers:" << endl;
	cin >> a >> b >> c;
	if ((a + b) < c || (a + c) < b || (b + c) < a) cout << "cannot form a triangle";
	else if (a == b && a == c) cout << "equilateral triangle";
	else if (a == b || a == c || b == c) cout << "isosceles triangle";
	else if (a != b && b != c && c != a) cout << "scalene triangle";
	

	return 0;
}

/* enter 3 numbers: 
5 7 1
cannot form a triangle 
*/
