//Aviad Klein ID 315552679
//Intro to computer sinsce
//7.1.
//the program gets a sorted array and number. its cheak if and where the number is located

#include <iostream>
using namespace std;

void InsertData(int* ARR, int length)
{
    for (int i = 0; i < length; i++)
    {
        cin >> ARR[i];
    }
}

bool CheckData(int* ARR, int length)
{
    for (int i = 0; i < length-1; i++)
    {
        if (ARR[i] >= ARR[i + 1])
        {
            cout << "ERROR\n";
            return false;
        }
    }
    return true;
}
int NumberInArray(int* arr, int length, int num)//binary search
{
    int left = 0;
    int right = length -1;
    while (left <= right)
        {
        int middle = ((left + right) / 2);
        if (arr[middle] > num)
            right = middle - 1;
        else if (arr[middle] < num)
            left = middle + 1;
        else
            return middle;
        }
    return -1;
 }

int main()
{
    const int length =10;

    int ARR[length];
    int num;
    int temp = 0;
    int i = 0;
    bool flag = false;
   
    cout << "enter 10 numbers:\n";
    while (true) {
        InsertData(ARR, length);
        if (CheckData(ARR, length)) break;
        else continue;
    }
                

    cout << "enter 1 number:\n";
    cin >> num;
    temp = NumberInArray(ARR, length, num);
    if (temp != -1) cout << "the number " << num << " was found at index " << temp;
    else cout << "not found";
    return 0;
}

/*
enter 10 numbers:
1 3 5 7 9 11 13 15 17 19
enter 1 number:
12
not found
*/