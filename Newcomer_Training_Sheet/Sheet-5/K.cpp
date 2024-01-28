#include <iostream>
#include <algorithm>
using namespace std;
void rotate(int arr[],int n,int x)
{
    int temp=0;
    for(int i=0;i<x;i++)
    {
        temp=arr[n-1];//5
        for(int j=n-1;j>0;j--)//1 2 3 4 5
        {
            arr[j]=arr[j-1];
        }
        arr[0]=temp;
    }
}
int main() {
    int n, x;
    cin >> n >> x;
 
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    rotate(arr, n ,x);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
 
    return 0;
}