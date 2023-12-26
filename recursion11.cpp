#include<iostream>
using namespace std;
int BS(int arr[], int s, int e,int target){
    //base case
    if(s>e){
        return -1;
    }
    // int start=s;
    // int end=n;
    int mid=s+(e-s)/2;
 
      if(arr[mid]==target){
        return mid;
      }
      else if(arr[mid]<target){
       return BS(arr,mid+1,e, target);
      }
      else{
         return BS(arr,s,mid-1,target);
      }
   
    }
    

int main(){
    int arr[]={10,30,40,50,70,90,100};
    int n=sizeof(arr)/sizeof(arr[0]);
    int s=0;
    int e=n-1;
    int target=40;
    int final=BS(arr, s,n, target);
    cout<<final;
}