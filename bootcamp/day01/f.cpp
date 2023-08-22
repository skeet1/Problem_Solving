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

bool cmp(pair<string, int>& a, pair<string, int>& b)
{
    return a.second < b.second;
}

void	solve()
{
    int n, x; cin >> n >> x;
    vi v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    vi sol(x + 1);
    sol[0] = 0;
    for (int i = 1; i <= x; i++) {
        sol[i] = 1e9;
        for (auto j : v) {
            if (i - j >= 0)
                sol[i] = min(sol[i], 1 + sol[i - j]);
        }
    }
    if (sol[x] == 1e9) cout << -1;
    else cout << sol[x];
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
