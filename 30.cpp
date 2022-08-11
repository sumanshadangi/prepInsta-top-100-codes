//Binary to decimal
#include <iostream>
#include <math.h>
using namespace std;
int BtoD(int n){
    int sum=0;
    int exp=0;
    while(n!=0){
        int digit=n%10;
        sum=sum+digit*pow(2,exp);
        n=n/10;
        exp++;
    }
    return sum;
}
int main()
{
    int num;
    cout << "Enter Num: " << endl;
    cin >> num;
    cout<<BtoD(num);
    return 0;
}
