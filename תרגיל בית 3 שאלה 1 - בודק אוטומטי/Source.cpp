// name: Aviad Klein ID: 315552679
// Intro to computer science
// 3.1
// the program gets 2 digits positive number and check its digits(odd or even). 

#include <iostream>
using namespace std;

int main()
{
	int num;
	cout << "enter a number:"<<endl;
	cin >> num;
	// validation check: number is positive & has 2 digits .
	if (num > 9 && num < 100)
	{
		if (num % 2 == 1 && (num/10) % 2 == 1)cout << "odd digits only\n"<< (num / 10) + (num % 10) << endl;
		else if (num % 2 == 0 && (num/10) % 2 == 0) cout << "even digits only\n"<< (num / 10) * (num % 10) << endl;
		else cout << "mixed number" << endl;
	}
	else cout << "ERROR" <<endl; 
	
	return 0;
}

/*enter a number:
19
odd digits only 
*/
