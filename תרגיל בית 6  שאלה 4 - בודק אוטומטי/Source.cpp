//Aviad Klein ID 315552679
//Intro to computer science
//6.4.
//the program gets an array, and prints its sourt. 

#include <iostream>
using namespace std;

void sort_array(float* p)
{
	float temp = 0;
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6 - 1; j++)
		{
			if (p[j] > p[j + 1])
			{
				temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
		}
	}
}

int result(float* a, float* b, int* c)
{
	int counter = 0;
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (b[i] == a[j])
			{
				c[counter] = j;
				counter++;
			}
		}

	}
	return *c;
}


int main()
{
	float A[6];
	float B[6];
	int C[6];
	float num1;

	cout << "enter  6 numbers between 0 and 1:\n";
	for (int i = 0; i < 6; i++)
	{
		cin >> num1;
		if (num1 < 1 && num1 > 0) A[i] = num1;
		else
		{
			cout << "ERROR\n";
			i=0;
			i--;
		}
	}

	for (int i = 0; i < 6; i++)
	{
		B[i] = A[i];
	}
	sort_array(B);
	result(A, B, C);
	cout << "sorted indices:\n";

	for (int i = 0; i < 6; i++)
	{
		cout << C[i]<< " ";
	}
	return 0;

}
	

/*
enter  6 numbers between 0 and 1:
0.9 0.5 2.7
ERROR
0.3 0.2  0.4 0.1 0.05 0.9
sorted indices:
 1 2 4 5 3 0
*/