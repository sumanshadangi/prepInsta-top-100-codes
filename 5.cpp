#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter Num1: " << endl;
    cin >> num1;
    cout << "Enter Num2: " << endl;
    cin >> num2;
    if (num1 > num2)
        cout << num1 << " is greater";
    else
        cout << num2 << " is greater";
    return 0;
}