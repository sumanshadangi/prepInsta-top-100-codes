//Print all permutation of string c
#include <iostream>
using namespace std;
void printPermutation(string str, int l, int r){
	if(l==r) cout<<str<<"\n";
	for(int i=l;i<=r;i++){
		swap(str[i],str[l]);
		printPermutation(str, l+1, r);
		swap(str[i],str[l]);
	}
}
int main()
{
    string str="ABC";
	printPermutation(str,0,str.length()-1);
    return 0;
}
