//LCM
#include <iostream>
using namespace std;
int hcf(int n1,int n2){
 return n2==0?n1:hcf(n2,n1%n2);
}
int main()
{
    int num1,num2;
    cout << "Enter Num1: " << endl;
    cin >> num1;
    cout << "Enter Num2: " << endl;
    cin >> num2;
    int l=num1*num2/hcf(num1,num2);
    cout<<l;
    return 0;
}
