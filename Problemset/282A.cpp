#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    long long int i,j,t,n,temp,cnt;
    cin>>n;
    temp=0;
    while(n--)
    {
        cin>>str;
        if(str[1]=='+'){
            temp++;
        }
        else if(str[1]=='-'){
            temp--;
        }
    }
    cout<<temp<<endl;
    return 0;
}