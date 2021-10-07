#include<iostream>
#include<string.h>
using namespace std;
int main(){
string str = "programming";
string rev = string(str.rbegin(),str.rend());
cout<<rev;
return 0;
}

