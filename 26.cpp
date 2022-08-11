//friendly pair
#include <iostream>
using namespace std;
void friendlyPair(int n1,int n2){
   int sum1=0,sum2=0;
    for(int i=1;i<=n1/2;i++){
        if(n1%i==0){
            sum1+=i;
        }
    }
    for(int i=1;i<=n2/2;i++){
        if(n2%i==0){
            sum2+=i;
        }
    }
    if(sum1/n1==sum2/n2)cout<<"Friendly Pair";
    else cout<<"not friendly pair";
}
int main()
{
    int num1,num2;
    cout << "Enter Num1: " << endl;
    cin >> num1;
    cout << "Enter Num2: " << endl;
    cin >> num2;
    friendlyPair(num1,num2);
    return 0;
}
