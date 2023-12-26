#include<iostream>
using namespace std;
void findSubSequence(string str, string output , int index){
    if(index>=str.length()){
         cout<<output<<endl;
        return ;
       
    }
    char ch=str[index];
    //include
    findSubSequence(str,output,index+1);
    //exclude
    output.push_back(ch);
    findSubSequence(str,output,index+1);
}
int main()
{
    string str="abc";
    string output=" ";
    int index=0;
    findSubSequence( str ,  output,  index);
}