//GCD=HCF
#include <iostream>
using namespace std;
int gcd(int n1,int n2){
    int g=1;
 for(int i=1;i<n1||i<n2;i++){
   if(n1%i==0&&n2%i==0)
   g=i;
 }
 return g;
}
int main()
{
    int num1,num2;
    cout << "Enter Num1: " << endl;
    cin >> num1;
    cout << "Enter Num2: " << endl;
    cin >> num2;
    int gc=gcd(num1,num2);
    cout<<gc;
    return 0;
}
