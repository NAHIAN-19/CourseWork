#include<bits/stdc++.h> 
using namespace std; 
int main() 
{ 
    long long a[110][110],n,i,j,s1,s2,sum; 
    cin>>n; 
    for(i=1; i<=n; i++){ 
        for(j=1; j<=n; j++){ 
            cin>>a[i][j]; 
        } 
    } 
    s1=0; 
    s2=0; 
    sum=0; 
    for(i=1;i<=n;i++){ 
        s1+=a[i][i]; 
    } 
    for(i=1,j=n; i<=n,j>=1; i++,j--){ 
        s2+=a[i][j]; 
    } 
    //sum = abs(s1-s2); 
    cout<<abs(s1 - s2)<<endl; 
    return 0; 
}