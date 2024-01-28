#include<stdio.h>
 
int main ()
{
 
  int arr[1010], n, k, i, j, p, d, t, mn;
  scanf ("%d", &n);
  for (i = 0; i < n; i++)
    {
      scanf ("%d", &arr[i]);
    }
  for (j = 0; j < n; j++)
    {
 
      mn = arr[j];
      p = j;
      for (i = j; i < n; i++)
	{
	  if (arr[i] < mn)
	    {
	      mn = arr[i];
	      p = i;
	    }
	}
      t = arr[j];
      arr[j] = arr[p];
      arr[p] = t;
    }
  for (j = 0; j < n; j++)
    {
      printf ("%d ", arr[j]);
    }
 
  return 0;
}