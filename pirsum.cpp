#include<iostream>
using namespace std;
void pairsum(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
        cout<<arr[i]+arr[j]<<endl;
        }
    }
}
int main()
{
    int arr[]={10,20,30,40,50,60};
    int n=6;
    pairsum(arr, n);
}