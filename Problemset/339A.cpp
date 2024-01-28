#include<bits/stdc++.h>
using namespace std;
int main()
{
  int arr[4]={0},cnt =0,n = 0,n2=0;
  string s;
  cin>>s;
  for(int i =0;i<s.size();i++)
  {
      if(s[i] == '+')
        continue;
      else
      {
          if(s[i] == '1')
            arr[1]++;
            else if (s[i] =='2')
                arr[2]++;
                     else if (s[i] =='3')
                arr[3]++;
                n++;
      }
  }
  for(int i =1;i<=3;i++)
  {
      if(arr[i] != 0)
        cnt+=1;
  }
  for(int i =1;i<=3;i++){
    for(int j =1;j<=arr[i];j++)
  {   if(i == 1)
      cout<<"1";
      else if(i ==2)
        cout<<"2";
         else if(i ==3)
        cout<<"3";
        n2++;
  if(i == 3  && j == arr[i] || n2 == n)
   continue;
if( n2 != n)
   {cout<<"+";
   }
  }
 
  }
    cout<<endl;
}