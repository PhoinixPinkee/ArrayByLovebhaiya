#include<iostream>
using namespace std;
int first_occur(int arr[], int n,int target)
{
    int start=0;
    int end=n-1;
   int  mid=(start+end)/2;
   while(start<=end)
   {
    if(target==arr[mid])
    {
        int ans=mid;
        end=mid-1;
    }
    else if(target>arr[mid])
    {
        start=mid+1;
    }
    else if(target<arr[mid])
    {
        end=mid-1;
    }
    mid=(start+end)/2;
   }

}
int last_occur(int arr[], int n,int target)
{
    int start=0;
    int end=n-1;
    int ans=-1;
   int  mid=(start+end)/2;
   while(start<=end)
   {
    if(target==arr[mid])
    {
         ans=mid;
        start=mid+1;
    }
    else if(target>arr[mid])
    {
        start=mid+1;
    }
    else if(target<arr[mid])
    {
        end=mid-1;
    }
    mid=(start+end)/2;
   }

}
int total_occur(int arr[], int n, int target)
{
    int first=first_occur(arr, n,target);
    int last=last_occur(arr,n, target);
    int total_occur=last-first+1;

    return total_occur;
}

int main()
{
    int arr[]={10,20,30,30,30,30,30,50,60};
    int n=9;
    int target=30;
    int fans=total_occur(arr, n,target);
    cout<<fans;
}