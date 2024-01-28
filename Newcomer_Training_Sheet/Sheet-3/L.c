#include<stdio.h>
int main()
{
    int  a,b,max,c,n;
    int sum=0;
    max=-1000000;
    int num[110];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
 
 
    scanf("%d",&a);
    for(int m=0;m<a;m++)
    {
        scanf("%d",&num[m]);
    }
    for(int k=0;k<a;k++)
    {
 
        for(int i=k;i<a;i++)
        {
            for(int j=k;j<=i;j++)
            {
                if(max<num[j])
                {
                    max=num[j];
                }
 
            }
            printf("%d ",max);
            max=-1000000;
 
        }
    }
    printf("\n");
 
}
}