//calculate addition of two Fractions
#include <iostream>
using namespace std;
int hcf(int n1,int n2){
 return n2==0?n1:hcf(n2,n1%n2);
}
int main()
{
    int n1,d1,n2,d2;
    cout << "Enter n1 and d1 : " << endl;
    cin >>n1>>d1;
    cout << "Enter n2 and d2 : " << endl;
    cin >>n2>>d2;
    int lcm=(d1*d2)/hcf(d1,d2);
    int numerator_sum=(lcm/d1)*n1+(lcm/d2)*n2;
    cout<<"result = "<<numerator_sum<<"/"<<lcm;
    return 0;
}
