// From here recurssion starts
//Power of a number
#include <iostream>
using namespace std;
int power(int base, int p){
	if(p==0) return 1;
	return base*power(base,p-1);
}
int main()
{
    int base=2, p=3;
    cout<<power(base,p);
    return 0;
}
