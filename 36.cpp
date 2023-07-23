//find the Quadrant in which Coordinates lie
#include <iostream>
#include <math.h>
using namespace std;
void findQuadrant(int x,int y)
{
    if(x>0&&y>0)
    cout<<"1st quadrant";
    else if(x<0&&y>0)
    cout<<"2nd quadrant";
    else if(x<0&&y<0)
    cout<<"3rd quadrant";
    else if(x>0&&y<0)
    cout<<"4th quadrant";
    else if(x==0&&y!=0)
    cout<<"x axis";
    else if(x!=0&&y==0)
    cout<<"y-axis";
    else
    cout<<"origin";
}
int main()
{
    int x,y;
    cout << "Enter x: " << endl;
    cin >> x;
    cout << "Enter y: " << endl;
    cin >> y;
    findQuadrant(x,y);
    return 0;
}
