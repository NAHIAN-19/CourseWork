#include<bits/stdc++.h>
using namespace std;
int main(){
    string str,st;
    int i,j,temp,cnt;
    char c;
    cin>>str;
    sort(str.begin(),str.end());
    temp=1;
    for(i=0;i<str.size();i++){
        cnt=0;
        if(str[i]==str[i+1]){//a==a
            temp++;//2
            c=str[i];//a=a;
            cnt=1;
        }
        if(cnt==0){
            if(temp==1){
                c=str[i];
            }
            cout<<c<<" : "<<temp<<endl;
            temp=1;
        }
    }
}