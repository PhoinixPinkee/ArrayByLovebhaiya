#include<iostream>
using namespace std;
int OddOccur(int arr[],int n)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(s==e)
        {
            return s;
        }
        if(mid & 1){
            if(mid+1<n-1 && arr[mid]==arr[mid-1]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            if(arr[mid]==arr[mid+1]){
                s=mid+2;
            }
            else{
                e=mid-1;
            }
        }
        else{
            ans=mid;
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return -1;
    
}
int main()
{
    int arr[]={1,1,2,2,3,3,4,4,2,5,5,6,6};
    int n=13;
    int ans=OddOccur(arr, n);
    cout<<"The odd occurance element is"<<ans;
}