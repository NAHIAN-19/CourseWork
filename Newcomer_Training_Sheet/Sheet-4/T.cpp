#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str,st;
    int i,j,n,x,temp,cnt;
    getline(cin, str);
    n=1;
    for(i=0;i<str.size();i++)
    {
        if(n==6){
            break;
        }
        else if(str[i]=='='&&n==1){
            cout<<"username: ";
            for(j=i+1;str[j]!='&';j++){
                cout<<str[j];
            }
            n++;
            cout<<endl;
        }
        else if(str[i]=='='&&n==2){
            cout<<"pwd: ";
            for(j=i+1;str[j]!='&';j++){
                cout<<str[j];
            }
            n++;
            cout<<endl;
        }
        else if(str[i]=='='&&n==3){
            cout<<"profile: ";
            for(j=i+1;str[j]!='&';j++){
                cout<<str[j];
            }
            n++;
            cout<<endl;
        }
        else if(str[i]=='='&&n==4){
            cout<<"role: ";
            for(j=i+1;str[j]!='&';j++){
                cout<<str[j];
            }
            n++;
            cout<<endl;
        }
        else if(str[i]=='='&&n==5){
            cout<<"key: ";
            for(j=i+1;j<str.size();j++){
                if(str[j]<='a'&&str[j]>='z'){
                    break;
                }
                cout<<str[j];
            }
            n++;
            cout<<endl;
        }
    }
    return 0;
}