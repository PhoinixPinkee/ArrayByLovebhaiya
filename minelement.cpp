#include<iostream>
using  namespace std;
int max_element(int arr[], int n)
{
    int maxans=INT8_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>maxans)
        {
            maxans=arr[i];
        }
    }
    return maxans;
}
int min_element(int arr[], int n)
{
    int minans=INT8_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<minans)
        {
            minans=arr[i];

        }
    }
    return minans;
}
int main()
{
    int arr[]={9,7,6,5,87,3,2};
    int n=7;
    int ans=min_element(arr, n);
    cout<<ans;
    int ans1=max_element(arr, n);
    cout<<ans1;
}