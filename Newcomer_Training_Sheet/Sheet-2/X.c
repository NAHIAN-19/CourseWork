#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n,i,j,a,b,c,m,temp,cnt,flag,sum,arr[100],ar[100];
    scanf("%d",&n);
    cnt=temp=0;
    for(i=0;i<n;i++)
    {
        temp=cnt=0;
        scanf("%d",&m);
        while(m!=0)
        {
            if(m%2==1)
            {
                cnt++;
            }
            m/=2;
        }
        temp=pow(2,cnt)-1;
        printf("%d\n",temp);
    }
    return 0;
}