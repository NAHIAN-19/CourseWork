#include <bits/stdc++.h>
using namespace std;
const int s=500;
void swap_rows(int arr[s][s],int n, int x, int y)
{
    for(int i=0;i<n;i++)
    {
        swap(arr[x][i],arr[y][i]);
    }
}
void swap_columns(int arr[s][s],int n, int x, int y)
{
    for(int i=0;i<n;i++)
    {
        swap(arr[i][x],arr[i][y]);
    }
}
int main()
{
    int n,x,y,i,j;
    cin>>n>>x>>y;
    int arr[s][s];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    x=x-1;
    y=y-1;
    swap_rows(arr , n , x , y);
    swap_columns(arr , n , x , y);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}