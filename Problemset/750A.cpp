#include <iostream>
using namespace std;
int main()
{
    int n,m,i,j,temp,cnt,max_time=1440;
    cin>>n>>m;
    //temp=(n*(n+1)/2)*5;
    cnt=1200+m;
    i=1;
    temp=0;
    while(cnt<max_time)
    {
        if(cnt+i*5>max_time){
            break;
        }
        cnt+=i*5;
        i++;
        temp++;
    }
    if(temp>n){
        temp=n;
    }
    cout<<temp<<endl;
    return 0;
}
