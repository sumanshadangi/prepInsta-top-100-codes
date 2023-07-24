// length of a string
#include <iostream>
using namespace std;
int length_string(char* str){
	if(*str=='\0') return 0;
	return 1+length_string(str+1);
}
int main()
{
    char str[]="suman";
	cout<<length_string(str);
    return 0;
}
