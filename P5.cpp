#include<iostream>
using namespace std;
int main(){
string a = "Hello";
cout<<&a;
a[0]='J';
cout<<&a;
cout<<a;
return 0;
}
