//decimal to octal
#include <iostream>
#include <math.h>
using namespace std;
void DtoO(int n){
    int barray[32];
    int i=0;
    while(n){
        barray[i]=n%8;
        n=n/8;
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
    DtoO(num);
    return 0;
}
