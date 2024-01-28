#include <stdio.h>
int main()
{
    int a,b,c,i,j,temp,t,cnt=0,arr[25][25];
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    temp=cnt=0;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(arr[i][j]==1)
            {
                if(i>3)
                {
                    if(j>3)
                    {
                        temp=j-3;
                        cnt=i-3;
                    }
                    else if(j<3)
                    {
                        temp=3-j;
                        cnt=i-3;
                    }
                    else if(j==3)
                    {
                        temp=0;
                        cnt=i-3;
                    }
                }
                else if(i<3)
                {
                    if(j>3)
                    {
                        temp=j-3;
                        cnt=3-i;
                    }
                    else if(j<3)
                    {
                        temp=3-j;
                        cnt=3-i;
                    }
                    else if(j==3)
                    {
                        temp=0;
                        cnt=3-i;
                    }
                }
                else if(i==3)
                {
                    if(j>3)
                    {
                        temp=j-3;
                        cnt=0;
                    }
                    else if(j<3)
                    {
                        temp=3-j;
                        cnt=0;
                    }
                    else if(j==3)
                    {
                        temp=0;
                        cnt=0;
                    }
                }
            }
        }
    }
    printf("%d\n",temp+cnt);
    return 0;
}