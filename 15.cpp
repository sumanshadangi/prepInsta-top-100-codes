#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num1;
    cout << "Enter Num1: " << endl;
    cin >> num1;
    int a=0,b=1;
    cout<<a<<" ,"<<b;
    int sum=0;
   while(num1-2>0){
     sum=a+b;
    cout<<", "<<sum;
    a=b;
    b=sum;
    num1--;
   }
    
    return 0;
}