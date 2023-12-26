#include<iostream>
using namespace  std;
int first_occurance(int arr[], int n, int target)
{
 int   start=0;
  int  end=n-1;
  int ind=-1;
  int mid=(start+end)/2;
  while(start<=end)
  {
    if(target==arr[mid])
    {
        int ind=mid;
        start=mid+1;
    }
    else if(target>arr[mid]){
        start=mid+1;
    }
    else if(target<arr[mid]){
        end=mid-1;
    }
    mid=(start+end)/2;
  }

}
int main()
{
    int arr[]={10,30,30,30,30,50,60};
    int n=7;
    int target=30;
    int ans=first_occurance( arr, n,target);
     if(ans==-1)
   {
    cout<<"Element not found";

   }
   else{
    cout<<"Element found at index"<<ans<<endl;
   }

    

}