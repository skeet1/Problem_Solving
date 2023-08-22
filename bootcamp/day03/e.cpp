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

vi fact(1000001);

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
    int a, b; cin >> a >> b;
    cout << (fact[a] * bin_exp(fact[b], mod-2) % mod * bin_exp(fact[a-b], mod-2) % mod) << nl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    fact[0] = 1;
    for (int i = 1; i < 1000001; i++)
        fact[i] = (fact[i-1] * i) % mod;
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
