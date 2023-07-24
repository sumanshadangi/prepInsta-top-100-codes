//Calculate f(nth) term of series
//f(4) = 1 + (2*3) + (4*5*6) + (7*8*9*10) = 5167.

#include <iostream>
using namespace std;
int term(int calculated, int current, int n){
	if(current==n+1) return 0;
	int curr=1;
	int i;
	for(i=calculated;i<calculated+current;i++){
		curr*=i;
	}
	return curr+term(i,current+1,n);
}
int main()
{
    int n=4;
	cout<<term(1,1,n);
    return 0;
}
