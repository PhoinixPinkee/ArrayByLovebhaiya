#include<iostream>
using namespace std;
int printArray(int arr[][4], int row, int col){
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int arr[3][4]={
        {1,2,3,4},{6,7,8,9},{12,23,45,67}
    };
    int row=3;
    int col=4;
    printArray(arr,row, col);
}