//Aviad Klein ID 315552679
//Intro to computer sinsce
//8.1.
//

#include <iostream>
using namespace std;

//1. àí äîòøê ðîöà, àí ðîöà îîùéëéí, àí ìà ðîà øèåøï -1.
//2. áãé÷ú ãéìåâ - äîøç÷ ùéù áéï 1 ì2 ðùîø. åáåã÷éí àí ðãìâ àåúå îøç÷ ðîöà àú äàéáø äáø áîòøê.
//3. áãé÷ú ãéìåâ îéðéîìé
int checkJumps(int* arrB, int* arrS, int biglength, int smalllength)
{
	int counter = 0;
	int jump = 0, a, b, k = 0;
	int i = 0;
	int ptr[10];

	// get first jump
	for (i = 0; i < biglength; i++, arrB++)
	{
		if (*arrB == *arrS)
		{			
			arrS++;
			counter++;
			ptr[k] = i;	
			k++;
		}
		if (counter == smalllength)
			break;
	}
	jump = ptr[1] - ptr[0]-1;
	if (smalllength == 1) jump = 0;
	
	return (jump);
}
bool SmallInBig(int* arrB, int* arrS, int biglength, int smalllength)
{
	int counter = 0;
	for (int i = 0; i < biglength; i++ , arrB++)
	{
		if (*arrB == *arrS)
		{
			arrS++;
			counter++;
		}		
	}
	if (counter == smalllength)
		return true;
		return false;
 }

int Sojump(int* arrB, int* arrS, int biglength, int smalllength)
{
	bool exs = (SmallInBig(arrB, arrS, biglength, smalllength));
	if (!exs)
		return (-1);
	else return checkJumps(arrB, arrS, biglength, smalllength);
}

int main()
{
	int Biglength = 80, smllength = 80;
	int big[80], small[80];

	//big array
	cout << "Enter the size of big:\n";
	cin >> Biglength;
	while (Biglength > 80 || Biglength < 1)
	{
		cout<< "ERROR\n" << "Enter the size of big:\n";
		cin >> Biglength;
	}
		
	cout << "Enter "<< Biglength <<" numbers:\n";
	for (int i = 0; i < Biglength; i++)
			cin >> big[i];

	//small array
	cout << "Enter the size of small:\n";
	cin >> smllength;
	while (smllength > 80 || smllength < 1)
	{
		cout << "ERROR\n" << "Enter the size of small:\n";
		cin >> smllength;
	}

	cout << "Enter " << smllength << " numbers:\n";
	for (int i = 0; i < smllength; i++)
		cin >> small[i];

	cout << "Size of jump:\n";
	cout << Sojump(big,small,Biglength,smllength);
	

	return 0;

}