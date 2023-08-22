/* SKEET IS HERE */

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <iomanip>
#include <map>

using namespace std;
#define int long long
typedef long long ll;
typedef vector<int> vi;
#define F first
#define nl '\n'
#define S second
#define PB push_back
#define MP make_pair
#define B begin()
#define RB rbegin()
#define E end()
#define RE rend()
#define Z size()
#define rep(i,a,b) for (int i = a; i < b; i++)
#define L length()

ll gcd(ll a, ll b) {return (b==0? a:gcd(b,a%b));}

const int mod = 1e9+7;

bool cmp(pair<string, int>& a, pair<string, int>& b)
{
    return a.second < b.second;
}

int C(int n, int k) {
    int res = 1;
    for (int i = n - k + 1; i <= n; ++i)
        res = (res * i) % mod;
    for (int i = 2; i <= k; ++i)
        res /= i;
    return res;
}

int bin_exp(int a, int b) {
    if (b == 0)
        return 1;
    if (b == 1)
        return a % mod;
    int res = bin_exp(a, b/2);
    res = res * res % mod;
    if (b & 1)
        res = res * a % mod;
    return res;
}

void solve()
{
    string s;
    cin >> s;

    int n = s.L;
    map<char, int> m;
    for (char c : s)
        m[c]++;

    vi fact(1e6 + 1);
    fact[0] = 1;
    for (int i = 1; i <= 1e6; i++)
        fact[i] = (fact[i - 1] * i) % mod;

    int ans = fact[n];
    for (auto x : m)
        ans = (ans * bin_exp(fact[x.S], mod - 2)) % mod;

    cout << ans << nl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    // cin >> t;
    t = 1;
    while(t--)
    {
        solve();
    }
}
