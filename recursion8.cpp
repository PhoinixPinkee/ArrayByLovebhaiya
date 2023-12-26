#include<iostream>
using namespace std;
void find(string str, int n, char target, int index){
    //base case
    if(index>=n){
        return ;
    }
    if(str[index]==target){
        cout<<index<<" ";
    }
    find(str,n,target, index+1);
}
int main(){
  string str="Babbar"  ;
  int n=str.length();
  char target='a';
  int index=0;
  find(str,n,target,index);
}