#include<iostream>
using namespace std;
int main()
{
char str1[]="HelloQuiz";
char str2[]={'H','e','l','l','o','Q', 'u','i','z'};
int n1=sizeof(str1)/sizeof(str1[0]);
int n2=sizeof(str2)/sizeof(str2[0]);
cout<<n1<<" "<<n2;
}