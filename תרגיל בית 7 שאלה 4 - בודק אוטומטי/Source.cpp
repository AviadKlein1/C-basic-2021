//Aviad Klein ID 315552679
//Intro to computer sincse
//7.4.
//the prog gets a list of 10 words and returns them orginauzed by alpha bithe.

#include <iostream>
using namespace std;

const int cols = 10;

void BubbleSort(char letters[][cols], int rows)
{
	bool swapped = true;
	int k = 1;
	int temp;
	
	while (swapped)
	{
		swapped = false;
		
		for (int i = 0, j = 0; i < rows - k; i++)
		{ 
			if (letters[i][j] > letters[i + 1][j])
			{ 
				for (int k = 0; k < cols; k++)
				{
					temp = letters[i][k];
					letters[i][k] = letters[i + 1][k];
					letters[i + 1][k] = temp;
				}
				swapped = true;
			}
		}
		k++;
	}
	
	swapped = true;
	k = 1;
	while (swapped)
	{
		swapped = false;
		
		for (int i = 0, j = 1; i < rows - k; i++)
		{   
			if 
				(letters[i][j] > letters[i + 1][j] && letters[i][j - 1] == letters[i + 1][j - 1])
			{  				for (int k = 1; k < cols; k++)
				{
					temp = letters[i][k];
					letters[i][k] = letters[i + 1][k];
					letters[i + 1][k] = temp;
				}
				swapped = true;
			}
		}
		k++;
	}
	
	swapped = true;
	k = 1;
	while (swapped)
	{
		swapped = false;
		
		for (int i = 0, j = 2; i < rows - k; i++)
		{   
			if (letters[i][j] > letters[i + 1][j] && letters[i][j - 1] == letters[i + 1][j - 1]
				&& letters[i][j - 2] == letters[i + 1][j - 2])
			{    
				for (int k = 2; k < cols; k++)
				{
					temp = letters[i][k];
					letters[i][k] = letters[i + 1][k];
					letters[i + 1][k] = temp;
				}
				swapped = true;
			}
		}
		k++;
	}
	
	swapped = true;
	k = 1;
	while (swapped)
	{
		swapped = false;
		
		for (int i = 0, j = 3; i < rows - k; i++)
		{   
			if (letters[i][j] > letters[i + 1][j] && letters[i][j - 1] == letters[i + 1][j - 1]
				&& letters[i][j - 2] == letters[i + 1][j - 2] && letters[i][j - 3] == letters[i + 1][j - 3])
			{    
				for (int k = 3; k < cols; k++)
				{
					temp = letters[i][k];
					letters[i][k] = letters[i + 1][k];
					letters[i + 1][k] = temp;
				}
				swapped = true;
			}
		}
		k++;
	}
	
	swapped = true;
	k = 1;
	while (swapped)
	{
		swapped = false;
		
		for (int i = 0, j = 4; i < rows - k; i++)
		{   
			if (letters[i][j] > letters[i + 1][j] && letters[i][j - 1] == letters[i + 1][j - 1]
				&& letters[i][j - 2] == letters[i + 1][j - 2] && letters[i][j - 3] == letters[i + 1][j - 3]
				&& letters[i][j - 4] == letters[i + 1][j - 4])
			{   
				for (int k = 4; k < cols; k++)
				{
					temp = letters[i][k];
					letters[i][k] = letters[i + 1][k];
					letters[i + 1][k] = temp;
				}
				swapped = true;
			}
		}
		k++;
	}
}

int main()
{
	char ARR[10][cols];
	cout << "enter 10 words:\n";
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> ARR[i][j];
		}
	}
	BubbleSort(ARR, 10);

	cout << "after sorting:\n";

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout<< ARR[i][j];
		}
		cout << " ";
	}
	return 0;
}

/*
enter 10 words:
house apple teach array teach books point float apply begin
after sorting:
apple apply array begin books float house point teach teach
*/