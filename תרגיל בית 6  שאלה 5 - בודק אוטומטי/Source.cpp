//Aviad Klein ID 315552679
//Intro to computer science
//6.5.
//the program prints the difference between two groups of numbers. 

#include <iostream>
using namespace std;

void diff(int* s1, int* s2, int*dif)
{
	bool flag = false;
	int counter = 0;
	for (int i = 0; i < 6; i++)
	{
		flag = false;
		for (int j = 0; j < 6; j++)
		{
			if (s1[i] == s2[j]) flag = true;
		}
		if (!flag)
		{
			dif[counter] = s1[i];
			counter++;
		}
	}
}


int main()
{
	int set1[6], set2[6], dif[6];
	int x, y;
	cout << "enter first 6 numbers:\n";
	for (int i = 0; i < 6; i++)
	{
		cin >> x;
		if (x >= 0 && x % 1 == 0) set1[i] = x;
		else
		{
			cout << "ERROR";
			i--;
		}
	}
	cout << "enter next 6 numbers:\n";
	for (int i = 0; i < 6; i++)
	{
		cin >> y;
		if (y >= 0 && y % 1 == 0) set2[i] = y;
		else
		{
			cout << "ERROR";
			i--;
		}
	}
	diff(set1, set2, dif);

	cout << "set difference is :\n";
	if (dif[0]<0 || dif[0]> 9999)cout << "empty";
	else {
		for (int i = 0; dif[i] > 0 && dif[i] < 999; i++)
		{
			cout << dif[i] << " ";
		}
	}
	return 0;
}

/*
enter first 6 numbers:
3 9 5 7 1 10
enter next 6 numbers:
1  6 3 4 5 2
set difference is:
10 9
*/

