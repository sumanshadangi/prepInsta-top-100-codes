//harshad number
#include <iostream>
using namespace std;
void harshadNumber(int n){
    int sum=0;
    int temp=n;
    while(temp!=0){
        int digit=temp%10;
        sum+=digit;
        temp=temp/10;
    }
    if(n%sum==0)cout<<"harshad number";
    else cout<<"not harshad number";
}
int main()
{
    int num;
    cout << "Enter Num: " << endl;
    cin >> num;
    harshadNumber(num);
    return 0;
}
