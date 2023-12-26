#include<iostream>
using namespace std;
void shift(int arr[], int n)
{
    // int temp=arr[n-1];
    // for(int i=n-1;i>=1;i--)
    // {
    //    arr[i]=arr[i-1] ;

    // }
    // arr[0]=temp;
  int temp= arr[0];
  for(int i=0;i<n;i++)
  {
    arr[i]=arr[i+1];
  }
  arr[n-1]=temp;
}

int main()
{
int arr[]={10,20,30,40,50,60};
int n=6;
shift(arr, n);
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
}