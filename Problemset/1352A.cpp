#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int n,arr[100],i,j,temp,cnt;
    cin>>n;
    i=j=cnt=0;
    while(n>0){
        arr[i]=n%10;
        n/=10;
        if(arr[i]!=0){
            cnt++;
        }
        i++;
        j++;
    }
    cout<<cnt<<endl;
    temp=1;
    for(i=0;i<j;i++)
    {
        if(arr[i]!=0){
            cout<<arr[i]*temp<<" ";
        }
        temp*=10;
    }
    cout<<endl;
}
return 0;
}
