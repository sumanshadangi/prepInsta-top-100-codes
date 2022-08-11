//decimal to binary
#include <iostream>
#include <math.h>
using namespace std;
void DtoB(int n){
    int barray[32];
    int i=0;
    while(n){
        barray[i]=n%2;
        n=n/2;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        cout<<barray[j];
    }
}
int main()
{
    int num;
    cout << "Enter Num: " << endl;
    cin >> num;
    DtoB(num);
    return 0;
}
