//Aviad Klein ID: 315552679
//Intro to computer science
//5.3.
//the program get's an ID and give's it's check digit.

#include <iostream>
#include <cstdlib>

using namespace std;


int	sumDigits(int num)
{
	int sum = 0;
  	while (num != 0)
	{
		sum += num % 10;
		num /= 10;	
	}
	return sum;
}

int lastDigitID(int ID)
{
	int x, sum= 0, result;
	for (int i = 0; i < 8; i++)
	{
		x = ID % 10;
		if (i%2 != 0)
		{
			x *= 1;
		}
		else
		{
			x *= 2;
		}
		if (x >= 10) 
			x = sumDigits(x);
		sum += x;
		ID /= 10;
	}
	result = 10 - (sum % 10);
	return result;
}



int main()
{
	int ID;
	cout << "enter your ID:\n";
	cin >> ID;
	cout << "your full ID is:\n";
	cout << ID << lastDigitID(ID);
	return 0;
}
/*
enter your ID:
31555267
your full ID is:
315552679
*/