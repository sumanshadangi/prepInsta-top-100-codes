//Binary to decimal
#include <iostream>
#include <math.h>
using namespace std;
int OtoD(int n){
    int sum=0;
    int exp=0;
    while(n!=0){
        int digit=n%10;
        sum=sum+digit*pow(8,exp);
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
    cout<<OtoD(num);
    return 0;
}


//stoi(binaryNumber,0,base) also used to convert binary numbers to octal(base=8), decimal(base=10), etc.