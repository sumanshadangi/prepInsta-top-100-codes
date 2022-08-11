#include <iostream>
using namespace std;
int order(int x)
{
    int len = 0;
    while (x)
    {
        len++;
        x = x/10;
    }
    return len;
}
int main(){
    int i;
    cin>>i;
    cout<<order(i);
}