#include<iostream>
using namespace std;
int fabbonacci(int n){
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    int ans=fabbonacci(n-1)+fabbonacci(n-2);
    return ans;
}
int main()
{
    cout<<fabbonacci(5);
}