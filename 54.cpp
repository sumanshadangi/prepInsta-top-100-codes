// reversing a number
#include <iostream>
using namespace std;
int reverse(int n,int reversedNumber){
	if(n==0) return reversedNumber;
	else {
	reversedNumber=reversedNumber*10 + n%10;
	return reverse(n/10,reversedNumber);
	}
}
int main()
{
    int n=123;
	cout<<"reverse: "<<reverse(n,0);
    return 0;
}
