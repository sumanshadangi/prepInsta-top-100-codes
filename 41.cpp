//Can a number be expressed as a sum of two prime numbers
#include <iostream>
using namespace std;
bool isPrime(int n){
    for(int i=2;i<=n/2;i++){
        if(n%i==0)return false;
    }
    return true;
}
int main()
{
    int n;
    cout << "Enter n: " << endl;
    cin >> n;
    for(int i=2;i<=n/2;i++){
        if(isPrime(i)&&isPrime(n-i))
         cout<<n<<" = "<<i<<" + "<<n-i<<endl;
    }
    return 0;
}
