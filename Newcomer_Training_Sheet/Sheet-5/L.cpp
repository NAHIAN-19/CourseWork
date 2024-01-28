#include <iostream>
#include <algorithm>
using namespace std;
void add(int arr[],int ar[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main() {
    int n, x;
    cin >> n;
    int arr[n],ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    add(arr,ar,n);
    return 0;
}
