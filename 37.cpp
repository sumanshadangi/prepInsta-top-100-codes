//Permutations in which n people can occupy r seats in a classroom
#include <iostream>
#include <math.h>
using namespace std;
int fact(int x)
{int ans=1;
    for(int i=1;i<=x;i++){
ans*=i;
    }
    return ans;
}
int main()
{
    int x,y;
    cout << "Enter number of people: " << endl;
    cin >> x;
    cout << "Enter number of seats: " << endl;
    cin >> y;
    cout<<"Permutations in which n people can occupy r seats in a classroom: "<<fact(x)/fact(x-y);
    return 0;
}
