#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    int i,j,temp,cnt,n;
    cin>>n;
    cin>>str;
    cnt=0;
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            temp=str[i];
            cnt++;
        }
        else
        {
            if(temp!=str[i])
            {
                cnt++;
                temp=str[i];
            }
        }
    }
    cout<<cnt<<endl;
}