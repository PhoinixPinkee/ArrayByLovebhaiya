#include<iostream>
using namespace std;
int main()
{
    char p[]="codewithbabbar";
    char t;
    int i,j;
    for(i=0,j=strlen(p);i!=j;i++,j++){
        t=p[i];
        p[i]=p[j-i];
        p[j-i]=t;
    }
    cout<<p<<endl;
}