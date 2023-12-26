#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<int>v;
    while(1)
    {
        int d;
        cin>>d;
        v.push_back(d);
        cout<<"capacity"<<v.capacity()<<endl;
        cout<<"size"<<v.size();
    }
}