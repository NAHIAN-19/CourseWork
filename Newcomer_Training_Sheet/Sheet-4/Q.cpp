#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    int i,j,arr[100],n,temp;
    temp=0;
    while(cin>>str){
        reverse(str.begin(),str.end());
        if(temp==1){
            cout<<" ";
        }
        temp=1;
        cout<<str;
    }
    cout<<endl;
    return 0;
}