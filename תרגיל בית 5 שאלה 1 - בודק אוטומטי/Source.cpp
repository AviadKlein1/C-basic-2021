//Aviad Klein ID: 315552679
//Intro to computer science
//5.1.
//the program has two functions that clculate area of rectangle and circle

#include <iostream>
#include <cstdlib>

using namespace std;


int area(int a, int b)
{
	return a * b;
}

float area(int radius)
{
	const float PI = 3.14159;
	return radius * radius * PI;
}




int main()
{
	int a=NULL, b=NULL, radius=0;

	//area of rectangle
	cout << "enter length and width of the rectangle:\n";
	cin >> a>> b;
	for (int i = 0; a < 0 || b < 0; i++)
	{
		cout << "ERROR\n";
		cin >> a>> b;
	}
	cout << area(a, b) << endl;
	
	//area of circle
	cout << "enter radius of the circle:\n";
	cin >> radius;
	for (int j = 0; radius < 0 ; j++)
	{
		cout << "ERROR\n";
		cin >> radius;
	}
	cout << area(radius) << endl;

	return 0;
}
/*
enter length and width of the rectangle:
2 4
8
enter radius of the circle:
1
3.14159
*/