#include <iostream>
#include <cmath>
using namespace std;
bool is_prime(long long n)
{
    if(n<2)
    {
        return false;
    }
    for(long long int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main()
{
    long long int n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(is_prime(n)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
 
    return 0;
}