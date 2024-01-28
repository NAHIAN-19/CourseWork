#include <iostream>
using namespace std;
int main()
{
    int n,m,i,j,min1,max1,cnt;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    max1=min1=arr[0];
    cnt=0;
    for(i=1;i<n;i++){
        if(arr[i]>max1){
            cnt++;
            max1=arr[i];
        }
        else if(arr[i]<min1){
            cnt++;
            min1=arr[i];
        }
    }
    cout<<cnt<<endl;
    return 0;
}
