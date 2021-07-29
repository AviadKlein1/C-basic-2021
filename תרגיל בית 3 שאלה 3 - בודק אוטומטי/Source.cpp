// name: Aviad Klein ID: 315552679
// Intro to computer science
// 3.3
// the program gets 2 numbers and an operator and show the calculation. 

#include <iostream>
using namespace std;

int main()
{ 
	int a, b;
	char oper;
	cout << "enter 2 numbers:" << endl;
	cin >> a >> b;
	cout << "enter an operator:" << endl;
	cin >> oper;
	
	switch (oper)
	{
	case '+':cout << a << oper << b << '=' << a + b;
		break;
	case '-':cout << a << oper << b << '=' << a - b;
		break;
	case '*':cout << a << oper << b << '=' << a * b;
		break;
	case '/':cout << a << oper << b << '=' << float (a) / float (b);
		break;
	default:cout << "ERROR" << endl;
	}
	
	return 0;
}

/*
enter 2 numbers:
10 4
enter an operator:
/
10 / 4 = 2.5
*/
