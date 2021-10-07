#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string isPalin(string S)
{
string P = S;
reverse(P.begin(),P.end());
if(S==P){
return "Yes";
}
else
{
return "No";
}
}
int main()
{
string S = "ABCDCBA";
cout<< isPalin(S);
return 0;
}
