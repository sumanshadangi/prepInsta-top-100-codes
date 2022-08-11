#include <iostream>
using namespace std;
bool isPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int num1, num2;
    cout << "Enter Num1: " << endl;
    cin >> num1;
    cout << "Enter Num2: " << endl;
    cin >> num2;
    for (int i = num1; i <= num2; i++)
    {
        if (isPrime(i))
            cout << i << " ";
    }
    return 0;
}