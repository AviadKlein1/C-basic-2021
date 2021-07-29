//Aviad Klein ID 315552679
//Intro to computer science
//6.2.
//the program checks how many times vector 2 appear in vector 1. 

#include <iostream>
using namespace std;

int times(int* arr1, int* arr2, int size1, int size2)
{
	int sum=0;
	for (int i = 0; i < size1; i++)
	{
		if (arr2[0] == arr1[i])
		{
			int j;
			for (j = 1; j < size2 && i < size1; j++)
			{
				if (arr2[j] == arr1[++i])	
					continue;
				else {
					j = 0;
					break;
				}
			}
			if (j == size2) {
				sum += 1;
			}
			i--;
		}
	}
	return sum;
}

int main()
{
	int size1 = 0,size2= 0;

	//vector1
	cout << "enter size of first array:\n";
	cin >> size1;
	while (size1 >500 || size1 < 1)
	{
		cout << "ERROR\n";
		cin >> size1;
	} 
	int* vector1 = new int[size1];
	cout << "enter first array values:\n";
	for(int i= 0; i < size1; i++)
	{
		cin >> vector1[i];
	}
	
	//vector2
	cout << "enter size of second array:\n";
	cin >> size2;
	while (size2 > 100 || size2 < 1)
	{
		cout << "ERROR\n";
		cin >> size2;
	}
	int* vector2 = new int[size2];
	cout << "enter second array values:\n";
	for (int i = 0; i < size2; i++)
	{
		cin >> vector2[i];
	}
	int result = times(vector1, vector2, size1, size2 );
	
	cout << "result: " <<result <<" times";
	return 0;
}

/*
enter size of first array:
18
enter first array values:
1 2 3 4  5  6 1 2 3 4 5 6 1 2 3 4 5 6
enter size of second array:
4
enter second array values:
5 4 3 2
result: 3 times
*/