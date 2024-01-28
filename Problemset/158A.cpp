#include <iostream>
using namespace std;
 
int main()
{
    int t,n,x,temp,arr[1100];
    cin>>n>>x;
    t=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=arr[x-1]){
            if(arr[i]>0)
            {
                temp++;
            }
        }
    }
    cout<<temp<<endl;
    return 0;
}