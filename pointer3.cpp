#include<iostream>
using namespace std;
void solve(int *arr, int size)
{
  //  cout<<"size of arra is"<<sizeof(arr)<<endl;
  cout<<arr<<endl;
   cout<<&arr;
}
int main()
{
    int arr[]={1,3,2,4,5};
   //  cout<<"size of arra is"<<sizeof(arr)<<endl;
   cout<<arr<<endl;
   cout<<&arr;
    solve(arr, 4);
//     int(* ptr)[10]= &arr;
//     char ch[10]="Mishra";
//     char (*cptr)[5]= &ch;
 }