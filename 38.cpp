//find the maximum number of handshakes

//approach
/*
For the first person, there will be N-1 people to shake hands with
For second person, there will be N -1 people available but as he has already shaken hands with the first person, there will be N-1-1 = N-2 shake-hands
For third person, there will be N-1-1-1 = N-3, and So On…
Therefore the total number of handshake   =   ( N – 1 + N – 2 +….+ 1 + 0 )   =   ( (N-1) * N ) / 2.
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of people: " << endl;
    cin >> n;
    int maxHandShakes=(n-1)*n/2;
    cout<<"total number of handshake = "<<maxHandShakes;
    return 0;
}
