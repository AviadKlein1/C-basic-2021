//Aviad Klein ID: 315552679
//Intro to computer science
//5.4.
//the program calculates hash table according to user input

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

bool isPrime(int a)
{
	for (int i = 2; i < a; i++)
	{
		if (a % i == 0)return false;
	}
	return true;
}

int findPrime(int num)
{
	for (int i = num; i > 0; i++)
	{
		if (isPrime(i))
		{
			cout << i << endl;
			return i;
		}		
	}
}

int main()
{
	int a, x;
	cout << "enter number of values:\n";
	cin >> a;
	if ((a > 0))
	{
		cout << "table size: ";
		(findPrime(a));
	}
	else
	{
	 srand((unsigned)time(NULL));
	 x = rand();
	 cout << "table size: ";
	 findPrime(x);
	}
	return 0;
}

/*
enter number of values:
25
table size: 29
*/