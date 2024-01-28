#include <iostream>
#include<unordered_set>
using namespace std;
void solve(int arr[],int n)
{
    int temp=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            arr[temp++]=arr[i];
        }
    }
    for(int i=temp;i<n;i++)
    {
        arr[i]=0;
    }
}
int main()
{
    int n,i,temp;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    solve(arr,n);
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}