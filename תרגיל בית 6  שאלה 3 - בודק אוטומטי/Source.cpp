//Aviad Klein ID 315552679
//Intro to computer science
//6.3.
//the program remove the duplicated numbers in an array. 

#include <iostream>

using namespace std;

void RemoveDuplicate(int* p, int currIndex, int size)
{
	for (int i = currIndex; i < size ; i++)
	{
		p[i] = p[i + 1];
	}
	p[size-1] = 0;
}
int main()
{
	int num,i;
	int arr[100];
	cout << "enter up to 100  values, to stop enter 0:\n";
	for (i = 0; i < 100; i++)
	{
		cin >> num;
		if (num == 0) break;
		arr[i] = num;
	}
	for (int j = 0; j < i; j++)
	{
		for ( int k = j+1; k < i; k++)
		{
			if (arr[j] == arr[k])
			{
				RemoveDuplicate(arr, k, i);
				--i; // to update the size of array.
				j--;
			}
		}
	}
	cout << "the new vector is:\n";
	for (int p = 0; p <  i ; p++)
	{
		cout << arr[p] << " ";
	}
	cout << "\nnumber of elements: " << i;
	return 0;
}

/*
enter up to 100  values, to stop enter 0:
1 5 8 9 5 4 1 2 3 5 1 4 8 9 6 5 0
the new vector is:
1 5 8 9 4 2 3 6
number of elements:  8
*/