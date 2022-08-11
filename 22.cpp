//perfect number
#include <iostream>
using namespace std;
void perfectNumber(int n){
    int sum=0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n)cout<<"perfect number";
    else cout<<"not perfect number";
}
int main()
{
    int num;
    cout << "Enter Num: " << endl;
    cin >> num;
    perfectNumber(num);
    return 0;
}
