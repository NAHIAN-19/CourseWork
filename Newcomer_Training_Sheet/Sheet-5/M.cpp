#include <iostream>
#include<unordered_set>
using namespace std;
int solve(int arr[],int n)
{
    unordered_set<int>s;
    for(int i=0;i<n;i++)
    {
        s.insert(arr[i]);
    }
    return s.size();
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
    cout<<solve(arr,n)<<endl;
    return 0;
}
