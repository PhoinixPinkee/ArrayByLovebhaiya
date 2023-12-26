#include<iostream>
using namespace std;
void twoshift(int arr[], int n)
{
    int temp[2];
    temp[0]=arr[0];
    temp[1]=arr[1];
    for(int i=0;i<n;i++)
    {
        arr[i]=arr[i+2];
    }
    arr[n-2]=temp[0];
    arr[n-1]=temp[1];
}
int main()
{
    int arr[]={10,20,30,40,50,60};
    int n=6;
    twoshift(arr, n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}