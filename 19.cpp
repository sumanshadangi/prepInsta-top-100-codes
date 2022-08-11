#include <iostream>
#include <math.h>
using namespace std;
int factorial(int num){
    int ans=1;
   for(int i=1;i<=num;i++){
    ans*=i;
   }
   cout<<ans;
}
int main()
{
    int num1;
    cout << "Enter Num1: " << endl;
    cin >> num1;
    factorial(num1);
    return 0;
}