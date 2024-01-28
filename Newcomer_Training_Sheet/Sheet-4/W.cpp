#include<bits/stdc++.h>
using namespace std;
int main(){
string str,st={"PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/"};
string s=     {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"};
int n,x,temp,i,j,cnt,m,l,r;
cin>>n;
cin>>str;
x=st.size();
int y=str.size();
int k=0;
if(n==1){
    for(i=0;i<y;i++){
        for(j=0;j<x;j++){
            if(str[i]==s[j]){
                str[i]=st[j];
                break;
            }
        }
    }
}
else if(n==2){
    for(i=0;i<y;i++){
        for(j=0;j<x;j++){
            if(str[i]==st[j]){
                str[i]=s[j];
                break;
            }
        }
    }
}
cout<<str;
return 0;
}