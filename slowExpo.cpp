#include<iostream>
using namespace std;
int fastExpo(int a,int b){
    int ans=1;
    while(b>0){
        if(b & 1){
            ans=ans*a;
        }
        a=a*a;
        b>>=1;
    }
    return ans;
}
int slowExpo(int a, int b){
   int i=0;
   int ans=1;
   while(i<b)
   {
    ans=ans*a;
    i++;
   }
   return ans;
}
int main()
{
    int ans=slowExpo(2,5);
    cout<<ans;
    int ans1=fastExpo(2,5);
    cout<<ans1;
}