// decimal to hexadecimal
#include <iostream>
#include <math.h>
using namespace std;
void DtoH(int n)
{
    char Hexarray[32];
    int i = 0;
    while (n)
    {
        int rem = n % 16;
        if (rem < 10)
        {Hexarray[i]=rem+48;
        i++;
        }
        else{
            Hexarray[i]=rem+55;
        i++;
        }
        n=n/16;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        cout << Hexarray[j];
    }
}
int main()
{
    int num;
    cout << "Enter Num: " << endl;
    cin >> num;
    DtoH(num);
    return 0;
}
