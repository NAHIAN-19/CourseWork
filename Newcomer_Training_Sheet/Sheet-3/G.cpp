#include <iostream>
using namespace std;
int main()
{
    int n,arr[100000],i,j,temp,x;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    temp=0;
    for(i=0;i<n/2;i++)
    {
        if(arr[i]!=arr[n-1-i]){
            temp=1;
            break;
        }
    }
    if(temp==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}