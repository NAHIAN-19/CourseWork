#include <bits/stdc++.h>
using namespace std;
bool is_odd(long long int num)
{
    return num%2==1;
}
bool is_palindrome(long long int num)
{
    bitset<32> binary(num);
    string to_binary=binary.to_string().substr(binary.to_string().find('1'));
    string palindrome(to_binary.rbegin(),to_binary.rend());
    return palindrome==to_binary;
}
int main()
{
    long long int n;
    cin>>n;
    if(is_odd(n) && is_palindrome(n))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
 
    return 0;
}