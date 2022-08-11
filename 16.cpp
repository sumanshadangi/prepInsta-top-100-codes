#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num1;
    cout << "Enter Num1: " << endl;
    cin >> num1;
    int a=0,b=1;
    int sum=0;
   while(num1-1>0){
     sum=a+b;
    a=b;
    b=sum;
    num1--;
   }
    cout<<sum;
    return 0;
}