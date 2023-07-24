//LCM
#include <iostream>
using namespace std;
int HCF(int a, int b){
	return b==0?a:HCF(b,a%b);
}
int main()
{
    int a=10,b=20;
	cout<<(a*b)/HCF(a,b);
    return 0;
}
