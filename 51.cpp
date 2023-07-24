//check if prime number
#include <iostream>
using namespace std;
bool isPrime(int n,int i=2){
	if(n<2) return false;
	else if(n==2) return true;
	else if(n%i==0)return false;
	else if(i*i>n) return true;
	return isPrime(n,i+1);
}
int main()
{
    int n=9;
	cout<<"is prime number? "<<isPrime(n);
    return 0;
}
