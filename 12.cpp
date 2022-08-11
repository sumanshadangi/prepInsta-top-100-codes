#include <iostream>
using namespace std;
int main()
{
    int num1;
    cout << "Enter Num1: " << endl;
    cin >> num1;
    int newNumber = 0;
    int copy = num1;
    while (num1 != 0)
    {
        int temp = num1 % 10;
        newNumber = newNumber * 10 + temp;
        num1 = num1 / 10;
    }
    if (copy == newNumber)
        cout << "Pelindrome";
    else
        cout << "Not a pelindrome";
    return 0;
}