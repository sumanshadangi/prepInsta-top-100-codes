//strong numbers
#include <iostream>
using namespace std;
int factorial(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans*=i;
    }
    return ans;
}
int main()
{
    int num;
    cout << "Enter Num: " << endl;
    cin >> num;
    int temp=num;
    int sum=0;
    while(temp!=0){
     int digit=temp%10;
     sum=sum+factorial(digit);
     temp=temp/10;
    }
    if(sum==num) cout<<"Strong Number";
    else cout<<"Not Strong Number";
    return 0;
}
