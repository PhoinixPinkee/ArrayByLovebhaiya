#include<iostream>
using namespace std;
#include<vector>
void print(vector<int>v)
{
    int size=v.size();
    for(int i=0;i<size;i++)
    {
        cout<<v[i]<<endl;
    }
}
int main()
{ vector<int> v;
v.push_back(3);
v.push_back(7);
v.push_back(6);
print(v);
v.pop_back();
print(v);
v.clear();
v.push_back(10);
print(v);

}