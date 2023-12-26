#include<iostream>
using namespace std;
int getunique(int arr[], int n)
{
     int ans=0;
    for( int i=0;i<n;i++)
    {
      ans=ans^arr[i];
      return ans;
    }
}
int main()
{
    int arr[]={5,8,9,7,9,7,5};
    int n=7;
    int findans=getunique(arr, n);
    cout<<findans;
}