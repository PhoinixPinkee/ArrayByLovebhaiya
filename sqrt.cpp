#include<iostream>
using namespace std;
int sqrt(int x){
    double s=0;
    double e=x;
    double ans=-1;
    double mid=s+(e-s)/2;
    while(s<=e)
    {
        if(mid*mid==x){
return mid;
        }
        else if(mid*mid<x)
        {
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{
//give no and fine the root of that number
int x;
cout<<"Enter the no whch you want to find the root"<<endl;
cin>>x;
double fans=sqrt(x);
cout<<fans;

}