#include <iostream>
using namespace std;
int main()
{
    int n,m,i,j,temp,cnt;
    cin>>n>>m;
    temp=0;
    cnt=0;
    for(i=0;i<n;i++)
    {
        if(i%2==0){
            for(j=0;j<m;j++){
                cout<<"#";
            }
            cout<<endl;
        }
        else if(i%2!=0){
            if(!temp){
                for(j=0;j<m-1;j++){
                    cout<<".";
                }
                cout<<"#"<<endl;
                temp=1;
            }
            else if(temp){
                cout<<"#";
                for(j=0;j<m-1;j++){
                    cout<<".";
                }
                cout<<endl;
                temp=0;
            }
        }
        
    }

    return 0;
}
