//abundant number
#include <iostream>
using namespace std;
void abundantNumber(int n){
   int sum=0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum>n)cout<<"abundant number";
    else cout<<"not abundant number";
}
int main()
{
    int num;
    cout << "Enter Num: " << endl;
    cin >> num;
    abundantNumber(num);
    return 0;
}
