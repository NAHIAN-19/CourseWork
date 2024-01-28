#include <iostream>
#include <cmath>
using namespace std;
long long int solve(int n,int m)
{
    if(m%2==1){
        m--;
    }
    long long int temp=0;
    for(long long int i=2;i<=m;i+=2)
    {
        temp+=pow(n,i);
    }
    return temp;
}
int main()
{
    long long int n,m;
    cin>>n>>m;
    cout<<solve(n,m)<<endl;
    return 0;
}