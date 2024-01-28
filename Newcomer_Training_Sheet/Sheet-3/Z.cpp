#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,i,j,lb,mid,ub,item,temp;
    cin>>n>>m;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    while(m--)
    {
        cin>>item;
        lb=0;
        ub=n-1;
        temp=0;
        while(lb<=ub)
        {
            mid=(lb+ub)/2;
            if(arr[mid]==item)
            {
                cout<<"found"<<endl;
                temp=1;
                break;
            }
            else if(arr[mid]>item)
            {
                ub=mid-1;
            }
            else if(arr[mid]<item)
            {
                lb=mid+1;
            }
        }
        if(temp==0)
        {
            cout<<"not found"<<endl;
        }
    }
    return 0;
}