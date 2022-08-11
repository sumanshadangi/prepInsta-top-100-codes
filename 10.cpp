#include <iostream>
using namespace std;
int main()
{
    int num1;
    cout << "Enter Num1: " << endl;
    cin >> num1;
    int sum = 0;
    while (num1 != 0)
    {
        int temp = num1 % 10;
        sum = sum + temp;
        num1 = num1 / 10;
    }
    cout << "Sum=" << sum;
    return 0;
}