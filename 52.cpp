// Find largest elemnt in an array
#include <iostream>
using namespace std;
int maxElement(int arr[],int n){
	if(n==0) return arr[0];
	return max(arr[n-1],maxElement(arr,n-1));
}
int main()
{
    int arr[]={2,9,5,1,7,6,11};
	int n=7;
	cout<<"max: "<<maxElement(arr,n);
    return 0;
}
