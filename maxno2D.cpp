#include<iostream>
using namespace std;
int Find_max(int arr[][3],int row, int col)
{
    int Max=INT8_MIN;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]>Max){
               Max= arr[i][j];
            }
        }
    }
    return Max;
}
int main()
{
    int arr[3][3]={
        {9,8,7},
        {6,5,4},
        {3,2,1}
    };
    int row=3;
    int col=3;
    int max=Find_max(arr,row,col);
    cout<<max;
}