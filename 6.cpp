#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    cout << "Enter Num1: " << endl;
    cin >> num1;
    cout << "Enter Num2: " << endl;
    cin >> num2;
    cout << "Enter Num3: " << endl;
    cin >> num3;
    int great;
    int temp = num1 >= num2 ? num1 : num2;
    if (num3 >= temp)
        great = num3;
    else
        great = temp;
    cout << "Greatest number is " << great;
    return 0;
}