#include<iostream>
using namespace std;
void rearrange(int arr[], int n)
{
          int j=0;
    for(int index=0;index<n;index++)
    {
  
        if(arr[index]<0)
        {
            swap(arr[index], arr[j]);
            j++;
        }
    }
}
int main()
{
    int arr[]={0,-21,56,-76,-10,0,87};
    int n=7;
    rearrange(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}