#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int r=0;r<n;r++)
    {
        for(int col=0;col<2*r+1;col++)
        {
            if(col==0 || col==2*r)
            {
                cout<<"* ";

            }
            
            
                for(int c=0;c<r+1;c++)
                {
                    cout<<col+1;
                }
                for(int c=col;c>0;c--)
                {
                    cout<<c;
                }
            }
        }
    }
