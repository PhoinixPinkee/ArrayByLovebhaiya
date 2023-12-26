#include<iostream>
using namespace std;
void reverse_array(int arr[],int size)
{
int left=0;
int right=size-1;
while(left<right)
{
    swap(arr[left], arr[right]);
    left++;
    right--;
}

}
int main()
{
    int arr[]={87,98,65,43,21};
    int size=5;
    reverse_array(arr,size);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}