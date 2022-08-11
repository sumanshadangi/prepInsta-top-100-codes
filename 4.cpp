#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter Num1: " << endl;
    cin >> num1;
    cout << "Enter Num2: " << endl;
    cin >> num2;
    int sum = 0;
    for (int i = num1; i <= num2; i++)
    {
        sum += i;
    }
    cout << "Sum= " << sum;
    return 0;
}