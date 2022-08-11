#include <iostream>
#include <math.h>
using namespace std;
int power(int base,int pow){
    int res=1;
   for(int i=0;i<pow;i++){
     res*=base;
   }
   cout<<res;
}
int main()
{
    int base,pow;
    cout << "Enter base: " << endl;
    cin >> base;
    cout << "Enter power: " << endl;
    cin >> pow;

    power(base,pow);
    return 0;
}