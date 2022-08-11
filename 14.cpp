#include <iostream>
#include <math.h>
using namespace std;
void armStrong(int i){
     int sum = 0;
    int copy=i;
    while (i > 0)
    {
        int temp = i % 10;
        sum = sum + pow(temp,3);
        i = i / 10;
    }
    if (copy == sum)
        cout << sum<<" ";  
}
int main()
{
    int num1,num2;
    cout << "Enter Num1: " << endl;
    cin >> num1;
    cout << "Enter Num2: " << endl;
    cin >> num2;
    for(int i=num1;i<=num2;i++){
      armStrong(i);
    }
   
    
    return 0;
}