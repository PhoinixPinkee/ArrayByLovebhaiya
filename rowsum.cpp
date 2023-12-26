#include<iostream>
using namespace std;
void sum(int arr[][3],int row, int col)
{
  
    for(int i=0;i<row;i++)
    {  int sum=0;
        for(int j=0;j<col;j++)
        {
          sum=sum+arr[i][j] ;
        }
        cout<<sum<<endl;
        
    }
    
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
    sum(arr,row,col);
   
}