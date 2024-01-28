#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define per(i, a, b) for (int i = (b)-1; i >= (a); --i)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define TIME cerr<<"Time elapsed: "<<clock()*1000.0/CLOCKS_PER_SEC<<"ms\n";
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LL_INF = 1e18;
const double EPS = 1e-9;
const double PI = acos(-1.0);

template <typename T>
T maxElement(const vector<T>& vec) {
    return *max_element(vec.begin(), vec.end());
}
template <typename T>
T minElement(const vector<T>& vec) {
    return *min_element(vec.begin(), vec.end());
}
template <typename T>
void reverseVector(vector<T>& vec) {
    reverse(vec.begin(), vec.end());
}
template <typename T>
vector<T> prefixSum(const vector<T>& vec) {
    vector<T> prefix(vec.size());
    partial_sum(vec.begin(), vec.end(), prefix.begin());
    return prefix;
}
template <typename T>
void sortDescending(vector<T>& vec) {
    sort(vec.rbegin(), vec.rend());
}
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }
ll mod(ll a, ll m) { return (a % m + m) % m; }
ll power(ll x, ll n) {
    ll res = 1;
    while (n) {
        if (n & 1)
            res = res * x;
        x = x * x;
        n >>= 1;
    }
    return res;
}
bool isPrime(ll n) {
    if (n < 2)
        return false;
    for (ll i = 2; i * i <= n; ++i) {
        if (n % i == 0)
            return false;
    }
    return true;
}
ll factorial(ll n) {
    ll res = 1;
    for (ll i = 1; i <= n; ++i) {
        res *= i;
    }
    return res;
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
int nand(int a, int b) {
    return ~(a & b);
}
int nor(int a, int b) {
    return ~(a | b);
}
vector<vector<int>> permute(vector<int>& nums) { //vector<vector<int>> arr=permute(ar);
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());
    do {
        result.push_back(nums);
    } while (next_permutation(nums.begin(), nums.end()));
    return result;//use double loop to cout
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int t;
    return 0;
}
