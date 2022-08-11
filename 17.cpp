#include <iostream>
#include <math.h>
using namespace std;
int fact(int num){
   for(int i=1;i<=num/2;i++){
    if(num%i==0) cout<<i<<", ";
   }
   cout<<num;
}
int main()
{
    int num1;
    cout << "Enter Num1: " << endl;
    cin >> num1;
    fact(num1);
    return 0;
}