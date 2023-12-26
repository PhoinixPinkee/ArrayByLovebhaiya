#include<iostream>
using namespace std;
int main()
{
    string name;
    cin>>name;
    cout<<"Printing string" <<name<<endl;
    int index=0;
    while(name[index]!='\0'){
        cout<<index<<" "<<name[index]<<endl;
        index++;
    }
    int value=name[6];
    cout<<value<<endl;
}