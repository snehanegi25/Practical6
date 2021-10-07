#include<iostream>
#include<string.h>
using namespace std;
int main(){
int c=0,i=0;
char str1[50],str2[50];
cout<<"Enter string 1";
cin>>str1;
cin>>str2;
while(str1[i]!='\0'|| str2[i]!='\0')
{
if(str1[i]!=str2[i])
{
c=1;
break;
}
i++;
}
if(c==0)
{
cout<<"Equal";
}else
{
cout<<"not equal";
return 0;
}
}
