#include<bits/stdc++.h>
using namespace std;
int main(){
    char c;
    string str,st;
    long long int i,j,n,m,temp,k,x,cnt,r,y;
    cin>>n>>m;
    cin>>str;
    while(m--){
        cin>>st;
        if(st=="pop_back"){
            str.pop_back();
        }
        else if(st=="front"){
            cout<<str.front()<<endl;
        }
        else if(st=="back"){
            cout<<str.back()<<endl;
        }
        else if(st=="sort"){
            cin>>x>>y;
            sort(str.begin() + min(x,y) - 1 , str.begin() + max(x,y));
        }
        else if(st=="reverse"){
            cin>>x>>y;
            reverse(str.begin() + min(x,y) - 1 , str.begin() + max(x,y));
        }
        else if(st=="print"){
            cin>>x;
            cout<<str[x-1]<<endl;
        }
        else if(st=="substr"){
            cin>>x>>y;
            for(i=min(x,y) - 1 ;i<=max(x,y) -1 ;i++){
                cout<<str[i];
            }
            cout<<endl;
        }
        else{
            cin>>c;
            str.push_back(c);
        }
    }
}