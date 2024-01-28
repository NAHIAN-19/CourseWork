#include <iostream>
#include <math.h>
using namespace std;
 
int main()
{
 
  long long int x;
  cin >> x;
  long long int  ans = log2(x);
  long long  int power = pow(2,ans);
  if (power == x)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
 
 
 
   
    return 0;
}