#include<iostream>
using namespace std;
bool isSorted(int arr[], int n,int index){

    if(index>=n){
        return true;
    }
     if(arr[index]>arr[index-1]){
       bool aagekaAns= isSorted(arr, n, index+1);
       return aagekaAns;
     }
     else{
    return false;
     }
   
}
int main()
{
    int arr[]={10};
    int n=5;
    int index=1;
    cout<<isSorted(arr, n,index);
}
