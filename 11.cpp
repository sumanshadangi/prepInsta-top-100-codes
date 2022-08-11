#include <iostream>
using namespace std;
int main()
{
    int num1;
    cout << "Enter Num1: " << endl;
    cin >> num1;
    int newNumber = 0;
    while (num1 != 0)
    {
        int temp = num1 % 10;
        newNumber = newNumber * 10 + temp;
        num1 = num1 / 10;
    }
    cout << "newNumber=" << newNumber;
    return 0;
}