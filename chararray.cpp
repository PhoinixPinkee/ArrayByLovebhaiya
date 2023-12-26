#include<iostream>
using namespace std;
int main()
{
    char ch[19];
    cin>>ch;
    cout<<ch<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"At index"<<i<<" "<<ch[i]<<endl;
    }
    char temp=ch[7];
    int value=(int)temp;
    cout<<value;

}
