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

int bin_exp(int a, int b) {
    if (b == 0)
        return 1;
    if (b == 1)
        return a;
    int res = bin_exp(a, b/2);
    res = res * res % mod;
    if (b & 1)
        res = res * a % mod;
    return res;
}

void	solve()
{
    string s; cin >> s;
    int ans = 1;
    if (s[0] == '?') ans = 9;
    if (s[0] == '0') ans = 0;

    for (int i = 1; i < s.L; i++)
        if (s[i] == '?')
            ans *= 10;
    cout << ans << nl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    // t = 1;
    while(t--)
    {
        solve();
    }
}
