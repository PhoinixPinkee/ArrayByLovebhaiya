#include<iostream>
using namespace std;
int findLength(char ch[], int size)
{
    int length=0;
    for(int i=0;i<size;i++){
        if(ch[i]=='\0'){
            break;
        }
        else{
            length++;
    }
    
    }
    return length;
}
void reverseString(char ch[], int len){
    int i=0;
    int j=len-1;
    while(i<=j)
    {
        swap(ch[i], ch[j]);
        i++;
        j--;
    }
}
void UpperCon(char ch[], int len)
{
    int index=0;
    while(ch[index]!='\0'){
char curchar=ch[index];
//Conversion in uppercase
if(curchar>='a' && curchar<='z'){
    ch[index]=curchar-'a'+'A';
}
index++;
    }
}
void replace(char ch[], int len)
{ int index=0;
    while(ch[index]!='\0')
    {
        if(ch[index]=='@'){
            ch[index]=' ';
        }
        index++;
    }
}
int main()
{
    char ch[100];
    cin.getline(ch, 100);
    int len=findLength(ch,100);
    // reverseString(ch, len);
    // cout<<"LEngth of string is"<<len<<endl;
    // cout<<ch<<endl;
    // UpperCon(ch, len);
    // cout<<ch<<endl;
    replace(ch, len);
    cout<<ch<<endl;
}