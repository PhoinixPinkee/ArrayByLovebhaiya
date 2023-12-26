#include<iostream>
using namespace std;
int main()
{
    int arr[]={8,-9,3,-7,-5,9,-3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int l=0;
    int h=n-1;
    while(l<h){
        if(arr[l]<0){
            l++;
        }
        else if(arr[h]>0){
            h--;
        }
        else{
            swap(arr[l], arr[h]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}