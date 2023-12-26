#include<iostream>
using namespace std;
int main()
    {
        int arr[]={1,7,3,6,5,6};
        //int n=sizeof(arr)/sizeof(arr[0]);
        int lsum=0;
        int rsum=0;
        int pivot;
        for(int i=0;i<6;i++)
        {
            pivot=i;
        for(int j=0;j<i;j++)
        {
            lsum+=arr[j];
        }
        for(int j=i+i;j<6;j++){
            rsum+=arr[j];
        }
       
        }
        if(lsum==rsum){
            cout<<pivot;
        }
        }
        

    
