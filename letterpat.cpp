#include<iostream>
using namespace std;
int main()
{
    int n;
    char ch;
    cin>>n;
    for(int row=0;row<n;row++)
    {
   for(int col=0;col<row+1;col++)
   {
    int num=col+1;
    ch=num+'A'-1;
    cout<<ch;
   }
   cout<<endl;
    }
}