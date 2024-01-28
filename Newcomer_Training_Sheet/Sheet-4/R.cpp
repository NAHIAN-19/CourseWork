#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    char c;
    int i,j,temp,n,k,m,cnt;
    temp=cnt=0;
    cin>>n;
    cin>>str;
    //n=str.size();
    for(i=0;i<n;i++){
        if(str[i]=='V'){
            cnt+=5;
        }
        else if(str[i]=='W'){
            cnt+=2;
        }
        else if(str[i]=='Z'&&i!=n-1){
            if(str[i+1]=='V'){
                cnt/=5;
                str[i+1]='0';
            }
            else if(str[i+1]=='W'){
                cnt/=2;
                str[i+1]='0';
            }
        }
        else if(str[i]=='Y'&&i!=n-1){
            str.push_back(str[i+1]);
            str[i+1]='0';
            n++;
            //cout<<str;
        }
        else if(str[i]=='X'&&i!=n-1){
            str[i+1]='0';
        }
    }
    cout<<cnt<<endl;
    return 0;
}