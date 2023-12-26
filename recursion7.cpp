#include<iostream>
using namespace std;
#include<vector>
void digitTono(vector<int>v, int n, int index){
      int ans=0;
    ans=ans*10+v[index];
    digitTono(v,n,index+1);
    cout<<ans;
}
int main()
{
    vector<int>v{4,5,6};
  
    int n=v.size();
    int index=0;
    digitTono(v,n, index);
    


}