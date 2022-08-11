#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num1;
    cout << "Enter Num1: " << endl;
    cin >> num1;
    int sum = 0;
    int copy=num1;
    while (num1 != 0)
    {
        int temp = num1 % 10;
        sum = sum + pow(temp,3);
        num1 = num1 / 10;
    }
    if (copy == sum)
        cout << "Armstrong";
    else
        cout << "Not a armstrong";
    return 0;
}