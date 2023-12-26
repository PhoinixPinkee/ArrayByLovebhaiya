#include<iostream>
using namespace std;
#include<vector>
void digitfun(int n, vector<int>&v)
{
    if(n==0){
        return;
    }
    int digit=n%10;
    n=n/10;
    digitfun(n,v);
    v.push_back(digit);

}
int main()
{
    int n=452;
    vector<int>v;
    digitfun(n, v);
    for(auto i:v){
        cout<<i<<" ";
    }
}