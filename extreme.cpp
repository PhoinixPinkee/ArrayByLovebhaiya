#include<iostream>
using namespace std;
void extreme(int arr[], int n)
{
    for(int left=0, right=n-1;left<=right;left++, right--)
    {
        cout<<arr[left]<<" "<<arr[right];
    }
}
int main()
{
    int arr[]={10,20,30,40,50,60};
    int n=6;
     extreme(arr,n);
    //  for(int i=0;i<n;i++)
     
    //  {
    //     cout<<arr[i]<<" ";
    //  }
}