#include<bits/stdc++.h>
using namespace std;
long long sum (long long n){
    return n * (n + 1) / 2;
}
int main() {
	long long n,m,c,max1,min1;
	cin>>n>>m>>c;
	max1 = max(n,m);
	min1 = min(n,m);
	cout<<(sum(max1/c) * c) - (sum((min1-1) / c) * c);
}