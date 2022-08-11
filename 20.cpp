#include <iostream>
#include <math.h>
using namespace std;
int primeFactor(int num){
while(num%2==0){
    cout<<2<<" ";
    num=num/2;
}
for(int i=3;i<sqrt(num);i++){
    while(num%i==0){
        cout<<i<<" ";
        num=num/i;
    }
}
if(num>2) cout<<num;
}
int main()
{
    int num1;
    cout << "Enter Num1: " << endl;
    cin >> num1;
    primeFactor(num1);
    return 0;
}