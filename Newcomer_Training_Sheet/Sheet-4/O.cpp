#include<bits/stdc++.h>
using namespace std;
int main(){
    char c;
    string str;
    int n,i,j,temp,arr[26]={0};
    cin>>n;
    for(i=0;i<n;i++){
        cin>>c;
        arr[(int)c - 97]++;
    }
    for(i=0;i<26;i++){
        while(arr[i]!=0){
            cout<<(char)(i+97);
            arr[i]--;
        }
    }
}