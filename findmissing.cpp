#include<iostream>
using namespace std;
int main()
    {
        int a[]={1,3,5,3,4};
        int n=sizeof(a)/sizeof(a[0]);
        for(int i=0;i<n;i++){
            int index=a[i-1];
            if(a[index-1]>0){
           a[index-1]*=-1;

            }

        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        for(int i=0;i<n;i++){
            if(a[i]>0){
                cout<<i+1;
            }
        }
    }
