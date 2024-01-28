#include<stdio.h>
#include<ctype.h>
int main()
{
    int total,count;
    char name[10000000];
    int array[100]={0};
    scanf("%s",name);
    count=0;
    for(int i=0;name[i]!='\0';i++)
    {
        if(name[i]>='a' && name[i]<='z')
        {
 
            name[i]=toupper(name[i]);
        }
        //printf("%c",name[i]);
        if(name[i]=='E')
        {
           array[0]++;
           //printf("%c",name[i]);
           //printf("%d\n",array[0]);
        }else if( name[i]=='G')
        {
           array[1]++;
        }
        else if(name[i]=='Y')
        {
            array[2]++;
        }else if( name[i]=='P')
        {
            array[3]++;
        }else if(name[i]=='T')
        {
            array[4]++;
        }
    }
    int min=array[0];
   // printf("%d\n",array[0]);
    for(int i=1;i<10;i++)
    {
 
 
    if(array[i]<min && array[i]>0)
        {
 
            min=array[i];
        }
 
    }
    printf("%d\n",min);
 
}