#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter Num: " << endl;
    cin >> num;
    if (num % 2 == 0)
        cout << "Even";
    else
        cout << "Odd";
    return 0;
}