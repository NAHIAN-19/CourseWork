#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,temp;
    cin>>a>>b;
    cout<<min(a,b)<<" ";
    c=(a-min(a,b))/2;
    d=(b-min(a,b))/2;
    cout<<max(c,d)<<endl;
}
