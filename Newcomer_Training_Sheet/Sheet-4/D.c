#include<stdio.h>
#include<string.h>
int
main () 
{
  
char arr[15], ar[15], a, b;
  
int n, i, cnt, cnt1;
  
scanf ("%s %s", arr, ar);
  
cnt = strlen (arr);
  
cnt1 = strlen (ar);
  
printf ("%d %d\n", cnt, cnt1);
  
printf ("%s%s\n", arr, ar);
  b=arr[0];
arr[0] = ar[0];
  
ar[0]=b;
  
printf ("%s %s\n", arr, ar);
  
return 0;
 
}