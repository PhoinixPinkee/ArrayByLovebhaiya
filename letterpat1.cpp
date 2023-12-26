#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char ch;
    for(int r=0;r<n;r++)
    {
        for(int c=0;c<r+1;c++)
        {
            int num=c+1;
             ch=num+'A'-1;
            cout<<ch;
        }
        for(int c=r;c>0;c--)
        {
            int num=c;
             ch=num+'A'-1;
            cout<<ch; 
        }
        cout<<endl;
    }

}