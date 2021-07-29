//Aviad Klein ID 315552679
//Intro to computer sinsce
//8.2.
//the program orgenaized the classes list in Machon Lev.

#include <iostream>
using namespace std;

bool isExsisted(int* DB, int numOfClasses, int MCode)
{
		for (int i = 0; i < numOfClasses; i++)
			if (MCode == (DB[i] / 1000)) return true;
return false;
}

void swap(int* xp, int* yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selectionSort(int arr[], int n)
{
	int i, j, min_idx;

	// One by one move boundary of unsorted subarray  
	for (i = 0; i < n - 1; i++)
	{
		// Find the minimum element in unsorted array  
		min_idx = i;
		for (j = i + 1; j < n; j++)
			if (arr[j] < arr[min_idx])
				min_idx = j;

		// Swap the found minimum element with the first element  
		swap(&arr[min_idx], &arr[i]);
	}
}

void fNewClass(int* DB, int numOfClasses, int newClassKode)
{
	int a = numOfClasses;
	DB[a] = newClassKode;
	selectionSort(DB, numOfClasses + 1);
}

void fDelClass(int* DB, int numOfClasses, int delClass)
{
	for (int i = 0; i < numOfClasses; i++)
	{
		if (DB[i] == delClass)
			{
				DB[i] = 0;
			}
	}
}

int fSearchClass(int* DB, int numOfClasses, int codeOfClass)
{
	for (int i = 0; i < numOfClasses; i++)
		if (DB[i] == codeOfClass)
			return i;
	return -1;
}

void fPrintAll(int* DB, int numOfClasses)
{
	for (int i = 0; i < numOfClasses; i++)
	{
		if(DB[i] != 0 )
			cout << DB[i]<< " "; 
	}
	cout << "\n";
}

void fPrintCode(int* DB, int numOfClasses, int MCode)
{
	for (int i = 0; i < numOfClasses; i++)
	{
		if (MCode == (DB[i]/1000))
			cout << DB[i] << " ";
	}
	
}

int main()
{
	int a;
	int DB[50];
	int numOfClasses = 0;
	int newClassKode;

	enum options{ newClass, delClass, searchClass, printCode, printAll, exit};
	
	cout << "Enter 0 to add a new classroom.\n" <<
		"Enter 1 to delete a hybrid classroom.\n" <<
		"Enter 2 to search for a specific classroom.\n" <<
		"Enter 3 to print all the classsrooms for a specific Machon.\n" <<
		"Enter 4 to print all the hybrid classrooms.\n" <<
		"Enter 5 to exit.\n" << "Enter your choice:\n";

	cin >> a;
	while (a > 5 || a < 0)
	{
		cout << "ERROR\n" << "Enter your next choice:\n";
		cin >> a;
	}
	while (a <= 5 && a >= 0)
	{
		switch (a)
		{
		case newClass:
			{
				cout << "Enter the code of the classroom to add:\n";
				cin >> newClassKode;
				if (newClassKode < 10000 || newClassKode > 99999)
					{
						cout << "ERROE\n";
						cout << "Enter the code of the classroom to add:\n";
						cin >> newClassKode;
					}
				fNewClass(DB, numOfClasses, newClassKode);
				numOfClasses++;
				fPrintAll( DB, numOfClasses);
			}
			break;
		case delClass:
			{	
				int del;
				cout << "Enter the code of the classroom to delete:\n";
				cin >> del;
				if (del < 10000 || del > 99999)
					{
						cout << "ERROE\n";
						cout << "Enter the code of the classroom to delete:\n";
						cin >> del;
					}
				fDelClass(DB, numOfClasses, del);
				fPrintAll(DB, numOfClasses);
			}
			break;
		case searchClass:
			{
				int codeOfClass;
				cout << "Enter the code of the classroom to search for:\n";
				cin >> codeOfClass;
				if (codeOfClass < 10000 || codeOfClass > 99999)
					{
						cout << "ERROE\n";
						cout << "Enter the code of the classroom to search for:\n";
						cin >> codeOfClass;
					}
				if (fSearchClass(DB, numOfClasses, codeOfClass) == -1)
					cout << "Not found\n";
				else
					cout << "Found\n";
			}
			break;
		case printCode:
			{
				int MCode;
				cout << "Enter the code of the Machon:\n";
				cin >> MCode;
				if (MCode < 10 || MCode > 99)
				{
					cout << "ERROE\n";
					cin >> MCode;
				}
					fPrintCode(DB, numOfClasses, MCode);
					
			}
			break;
		case printAll:
		{
			fPrintAll(DB, numOfClasses);
		}
			break;
		case exit:
			return -1;
		}
		cout << "Enter your next choice:\n";
		cin >> a;
	}
	return 0;
}

/*
* Enter 0 to add a new classroom.
Enter 1 to delete a hybrid classroom.
Enter 2 to search for a specific classroom.
Enter 3 to print all the classsrooms for a specific Machon.
Enter 4 to print all the hybrid classrooms.
Enter 5 to exit.
Enter your choice: 0
Enter the code of the classroom to add: 11111
11111
Enter your next choice: 0
Enter the code of the classroom to add: 44444
11111
44444
Enter your next choice: 0
Enter the code of the classroom to add: 33333
11111
33333
44444
Enter your next choice: 0
Enter the code of the classroom to add: 33555
11111
33333
33555
44444
Enter your next choice: 3
Enter the code of the Machon: 33
33333 33555
Enter your next choice: 4
11111
33333
33555
44444
Enter your next choice: 2
Enter the code of the classroom to search for: 65656
Not found
Enter your next choice: 2
Enter the code of the classroom to search for: 11111
Found
Enter your next choice: 1
Enter the code of the classroom to delete: 33555
11111
33333
44444
Enter your next choice: 0
Enter the code of the classroom to add: 22222
11111
22222
33333
44444
Enter your next choice: 3
Enter the code of the Machon: 5555
ERROR
55
Enter your next choice: 1
Enter the code of the classroom to delete: 33333
11111
22222
44444
Enter your next choice: 1
Enter the code of the classroom to delete: 33333
11111
22222
44444
Enter your next choice: 4
11111
22222
44444
Enter your next choice: 5

*/
