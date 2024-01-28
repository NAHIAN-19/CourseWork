#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+10],i,p=0;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            p^=a[i];
        }
        if(n%2==0){
            if(p==0)
                cout<<"2\n";
            else
                cout<<"-1\n";
        }
        else{
            cout<<p<<endl;
        }
        
    }
    return 0;
}
