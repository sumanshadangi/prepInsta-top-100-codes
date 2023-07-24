//Smallest element in an array
#include <iostream>
using namespace std;
int minElement(int arr[],int n){
	if(n==0) return arr[0];
	return min(arr[n-1],minElement(arr,n-1));
}
int main()
{
    int arr[]={1,2,3,4,5,0,56};
	int n=7;
	cout<<"smallest element: "<<minElement(arr,n);
    return 0;
}
