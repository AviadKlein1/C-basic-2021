//Aviad Klein ID: 315552679
//Intro to computer science
//5.2.
//the program check for perfect number

#include <iostream>
#include <cstdlib>

using namespace std;


bool perfect(int num)
{
	int sum = 0;
	for (int i = num - 1; i != 0; i--)
	{
		if ((num % i) == 0)
			sum += i;
	}
	if (sum == num) return true;
	return false;
}
int printPerfects(int num = 500)
{
	for (int i = 0; i < num; i++)
	{
		if (perfect(i)) cout << i << " ";
	}
	cout << "\n";
	return 0;
}

int main()
{
	int x;
	cout << "enter a number:\n";
	cin >> x;
	for (int i = 0; x < 0; i++)
	{
		cout << "ERROR\n";
		cin >> x;
	}
	printPerfects(x);
	printPerfects();
	
	return 0;
}
/*
enter a number:
445
6  28
6 28 496
*/