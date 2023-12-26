#include<iostream>
using namespace std;
int findQuotient(int devisor, int devidend)
{
    int s=0;
    int e=devidend;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(mid*devisor==devidend){
            return mid;
        }
        else if(mid*devisor<=devidend)
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
    int devisor=7;
    int devidend=29;
    int ans=findQuotient(devisor, devidend);
    cout<<"ans is:"<<" "<<ans<<endl;
}