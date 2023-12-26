#include<iostream>
using namespace std;
#include<vector>
bool arrsum(int arr[],int n, int target){
    int l=0;int h=n-1;
    while(l<h){
        if(arr[l]+arr[h]==target){
return true;
        }
        else if(arr[l]+arr[h]>target){
            h--;
        }
        else{
            l++;
        }
        return false;
    }

}
int main()
    {
int arr[7];

for(int i=0;i<7;i++)
{
cin>>arr[i];
}
int target=16;
int n=sizeof(arr)/sizeof(arr[0]);
cout<<arrsum(arr,n,target);
    }
