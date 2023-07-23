//Replace all 0’s with 1 in a given integer
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: " << endl;
    cin >> n;
    if(n==0)
    n=1;
    else{
        int temp=n;
        int rev=0;
        while(temp!=0){
            int rem=temp%10;
            if(rem==0)rem=1;
            rev=rev*10+rem;
            temp=temp/10;
        }
        n=0;
        while(rev!=0){
            int rem=rev%10;
            n=n*10+rem;
            rev=rev/10;
        }
    }
    cout<<"result = "<<n;
    return 0;
}
