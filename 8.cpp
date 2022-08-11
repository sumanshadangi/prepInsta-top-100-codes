#include <iostream>
using namespace std;
int main()
{
    int num1;
    cout << "Enter Num1: " << endl;
    cin >> num1;
    int flag = 1;
    for (int i = 2; i <= num1 / 2; i++)
    {
        if (num1 % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if (flag == 0)
        cout << "Not a prime number";
    else
        cout << "Prime number";
    return 0;
}