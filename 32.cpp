//hexadecimal to decimal
#include <iostream>
#include <math.h>
using namespace std;
int HtoD(string n){
    int sum=0;
    int exp=0;
   for(int i=n.length()-1;i>=0;i--){
   if(n[i]>=48&&n[i]<=57){
     int digit=int(n[i])-48;
     sum=sum+digit*pow(16,exp);
     exp++;
   }
   else if(n[i]>=65&&n[i]<=70){
    int digit=int(n[i])-55;
     sum=sum+digit*pow(16,exp);
     exp++;
   }
   }
    return sum;
}
int main()
{
    string num;
    cout << "Enter Num: " << endl;
    cin >> num;
    cout<<HtoD(num);
    return 0;
}