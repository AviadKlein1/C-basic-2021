//Aviad Klein ID 315552679
//Intro to computer sincse
//7.3.
// The program sorts the top and buttom triangles. 

#include <iostream>
using namespace std;
void arrayinsertsort(int arr[45])
{	
	int min, i;
	for (int j = 1; j < 45; j++)
	{
		min = arr[j];
		i = j - 1;
		while (i >= 0 && min < arr[i])
		{
			arr[i + 1] = arr[i];
			i--;
		}
		arr[i + 1] = min;
	}	
}
void InsertionSort(int mat[][10])
{
	
	int topTriangle[45], botTriangle[45];
	int k = 0;
	//copy tringle to array
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
			if (j > i)
				topTriangle[k++] = mat[i][j];

	arrayinsertsort(topTriangle);
	k = 0;
	//copy back
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
			if (j > i)
			{
				mat[i][j] = topTriangle[k++];
			}
	k = 0;
	//copy tringle 2
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
			if (j < i)
				botTriangle[k++] = mat[i][j];
	
	arrayinsertsort(botTriangle);
	
	k = 0;
	//copy back 2
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
			if (j < i)
				mat[i][j] = botTriangle[k++];
}			

int main()
{
	int MAT[10][10];
	cout << "enter the values:\n";
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cin >> MAT[i][j];
		}
	}

	cout << "before sorted:\n";
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << MAT[i][j]<<" ";
		}
		cout << endl;
	}

	cout << "sorted matrix:\n";
	InsertionSort(MAT);
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << MAT[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}

/*
enter the values:
before sorted:
5 8 7 4 8 1 3 0 7 2
8 2 7 6 7 5 7 8 3 0
0 6 5 0 4 7 6 5 8 5
2 0 2 0 6 4 8 1 7 3
2 6 2 3 6 2 3 7 2 1
5 5 1 6 3 7 2 3 7 4
4 2 5 6 0 1 4 5 4 4
5 0 5 6 7 5 3 6 3 2
0 5 0 1 0 5 7 5 8 1
6 3 2 1 2 1 8 3 6 8
sorted matrix:
5 0 0 0 1 1 1 1 2 2
0 2 2 2 2 3 3 3 3 3
0 0 5 3 4 4 4 4 4 4
0 0 0 0 5 5 5 5 6 6
0 1 1 1 6 6 7 7 7 7
1 1 2 2 2 7 7 7 7 7
2 2 2 2 3 3 4 7 8 8
3 3 3 4 5 5 5 6 8 8
5 5 5 5 5 5 6 6 8 8
6 6 6 6 6 7 7 8 8 8
*/