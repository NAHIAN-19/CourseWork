#include <iostream>
using namespace std;
int main()
{
       int r,c,s=0;
       cin>>r>>c;
       char a[r][c];
       for(int i=0; i<r ; i++)
        for(int j=0; j<c; j++) cin>>a[i][j];
            int x,y;
        cin>>x>>y;
        x--;y--;
        if (x-1<0 ) x=0;
        if (y-1<0 ) y=0;
        for(int i=x-1; i<x+2; i++){
            for(int j=y-1; j<y+2; j++){
                if(i==x && j==y) continue;
                else if(a[i][j]=='.') {
                    cout<<"no"<<endl;
                    return 0;
                }
                else s=1;
            }
        }
        if (s==1) cout<<"yes"<<endl;
}