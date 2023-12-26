#include<iostream>
using namespace std;

int findLen(char ch[], int size)
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
bool CheckPalindrome(char ch[], int n)
{
    int i=0;
    int j=n-1;
    while(i<=j){
        if(ch[i]==ch[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
        //agar last tak pahuch gye mtlb sare character sorted hai dont take tenstion much more for that;
        return true;
    }
}
int main()
{
    char ch[100];
    cin.getline(ch, 100);
    int len=findLen(ch,100);
    bool res=CheckPalindrome(ch, len);
    if(res){
        cout<<"string is  Palindrom";
    }
    else{
        cout<<"String is not palindrome";
    }
    
}