// name: Aviad Klein ID: 315552679
// Intro to computer science
// 3.5
// the program gets 3 numbers and arrange it from the smallest to the biggest.

#include <iostream>
using namespace std;

int main()
{
	int num1, num2, num3, smallest, middle, biggest;
	cout << "enter 3 numbers: " << endl;
	cin >> num1 >> num2 >> num3;
	 

	if (num1 < num2 && num1 < num3)
	{
		smallest = num1;
		if (num2 < num3)
		{
			middle = num2;
			biggest = num3;
		}
		else
		{
			middle = num3;
			biggest = num2;
		}
	}
	else if (num2 < num3 && num2 < num1)
	{
		smallest = num2;
		if (num1 < num3)
		{
			middle = num1;
			biggest = num3;
		}
		else
		{
			middle = num3;
			biggest = num1;
		}
	}
	else if (num3 < num2 && num3 < num1)
	{
		smallest = num3;
		if (num1 < num2)
		{
			middle = num1;
			biggest = num2;
		}
		else
		{
			middle = num2;
			biggest = num1;
		}
	}


	cout << smallest << " " << middle << " " << biggest << endl;
	return 0;
}


/*
enter 3 numbers: 
2 9 4
2 4 9  
*/
