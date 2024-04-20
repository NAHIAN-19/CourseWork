//                                                     _NAHIAN_                             
#include <bits/stdc++.h>
//use This -> #MARK: <- to partition code in mini map
#define rep(i, a, b) for (ll i = (a); i < (b); ++i)
#define per(i, a, b) for (ll i = (b)-1; i >= (a); --i)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((ll)(x).size())
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define mp make_pair
#define fi first
#define se second
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define nl endl
#define sp " "
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define TIME cerr<<"Time elapsed: "<<clock()*1000.0/CLOCKS_PER_SEC<<"ms\n";
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LL_INF = 1e18;
const double EPS = 1e-9;
const double PI = acos(-1.0);

template<typename T>
void generateAllSubset(const vector<T>& data){
    ll n = data.size();
    for (ll i = 0; i < (1 << n); i++) {
        bool flag = false;
        rep(j,0,n) {
            if (i & (1 << j)) {
                cout << data[j] << sp;
                flag = true;
            }
        }
        if (flag)
            cout << nl;
    }
}
template <typename T> T maxElement(const vector<T>& vec) {return *max_element(vec.begin(), vec.end());}
template <typename T> T minElement(const vector<T>& vec) {return *min_element(vec.begin(), vec.end());}
template <typename T> T nsqrt(const T &x) { T y = sqrt(x+2); while(y*y>x) { --y;} return y;}
template <typename T> vector<T> prefixSum(const vector<T>& vec) {vector<T> prefix(vec.size());partial_sum(vec.begin(), vec.end(), prefix.begin());return prefix;}
template <typename T> istream& operator>>(istream& is, vector<T>& vec) { for (T& x : vec) is >> x; return is;}
template <typename T> istream& operator>>(istream& is, list<T>& vec) { for (T& x : vec) is >> x; return is;}
template <typename T> ostream& operator<<(ostream& os, const vector<T>& vec) { for (const T& x : vec) os << x << sp; return os;}
template <typename T> ostream& operator<<(ostream& os, const list<T>& vec) { for (const T& x : vec) os << x << sp; return os;}
template <typename T> void reverseVector(vector<T>& vec) {reverse(vec.begin(), vec.end());}
template <typename T> void sortDescending(vector<T>& vec) {sort(vec.rbegin(), vec.rend());}
template <typename T> void sort_unique(vector<T>& vec){ sort(vec.begin(),vec.end());vec.resize(unique(vec.begin(),vec.end())-vec.begin());}

int nand(int a, int b) {return ~(a & b);}
int nor(int a, int b) {return ~(a | b);}
ll nfloor(ll a,ll b) { return a / b - (a % b && (a ^ b) < 0);}
ll nceil(ll a,ll b) { return nfloor(a + b - 1, b);}
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }
ll mod(ll a, ll m) { return (a % m + m) % m; }
ll power(ll x, ll n) {ll res = 1; while (n) {if (n & 1){res = res * x;} x = x * x; n >>= 1;} return res;}
ll factorial(ll n) {ll res = 1;for (ll i = 1; i <= n; ++i) {res *= i;}return res;}

bool isPrime(ll n) {
    if (n < 2)
        return false;
    for (ll i = 2; i * i <= n; ++i) {
        if (n % i == 0)
            return false;
    }
    return true;
}
vector<bool> sieve(int n) {
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= n; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
    return isPrime;
}
ll pollard_rho(ll n) {
    if (n == 1) return n;
    if (n % 2 == 0) return 2;
    ll x = rand() % (n - 2) + 2;
    ll y = x;
    ll c = rand() % (n - 1) + 1;
    ll d = 1;
    while (d == 1) {
        x = (x * x + c) % n;
        y = (y * y + c) % n;
        y = (y * y + c) % n;
        d = gcd(abs(x - y), n);
        if (d == n) return pollard_rho(n);
    }
    return d;
}
vector<ll> primeFactors(ll n) {
    vector<ll> factors;
    while (n % 2 == 0) {
        factors.push_back(2);
        n /= 2;
    }
    while (n > 1) {
        ll factor = pollard_rho(n);
        factors.push_back(factor);
        while (n % factor == 0) {
            n /= factor;
        }
    }
    return factors;
}
vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());
    do {
        result.push_back(nums);
    } while (next_permutation(nums.begin(), nums.end()));
    return result;
}

// use fill(1st index , last index, value) to fill the vector with value
/* list<ll> arr(n);
->pb,pf,pob,pof,  arr.sort()
list<ll>::iterator it = (arr.begin()/arr.end());
advance(pos,next index/pre index);//advance(it,2);,advance(it,-2);
insert(pos,num_to_insert,value);//insert(it,2,100);
*/


int main() {
ll _; cin>>_;
while(_--){
    ll n; cin>>n;
}
    return 0;
}