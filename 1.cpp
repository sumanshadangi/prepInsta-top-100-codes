#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter Num: " << endl;
    cin >> num;
    if (num == 0)
        cout << "Zero";
    else if (num >= 0)
        cout << "Positive";
    else
        cout << "Negative";
    return 0;
}



//g++ .\1.cpp
// .\a.exe