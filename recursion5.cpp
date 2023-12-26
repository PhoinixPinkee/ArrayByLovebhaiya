//store even no in the vactor
#include<iostream>
using namespace std;
#include<vector>
void store(int arr[], vector<int>&ans, int n, int index){
 if(index>=n) {
    return ;
 }  
 if(arr[index]%2==0){
    ans.push_back(arr[index]);
 }
 store(arr, ans,n,index+1);

}
int main()
{
int arr[]={3,8,9,32,45};
int n=5;
int index=0;
vector<int> ans;
store(arr,ans,n,index);
for(auto i:ans){
    cout<<i<<" ";
}
}