//nth term of fibonacci series
#include <iostream>
using namespace std;
int main()
{
    int n=3;
	int a=0,b=1;
	if(n==0) cout<<0;
	else if(n==1) cout<<1;
	else{
	int sum=0;
	while(n-1>0){
		sum=a+b;
		a=b;
		b=sum;
		n--;
	}
	cout<<b;
	}
    return 0;
}
