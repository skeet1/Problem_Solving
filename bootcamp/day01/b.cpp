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
    int n, q; cin >> n >> q;
    vi v(n);

    for (auto &x : v)
        cin >> x;
    vi ps(n+1);
    ps[0] = 0;
    ps[1] = v[0];
    for (int i = 2; i <= n; i++) {
        ps[i] = ps[i - 1] ^ v[i-1];
    }

    // for (auto x : ps)
    //     cout << x << ' ';
    // cout << '\n';

    while (q--) {
        int a, b; cin >> a >> b;
        cout << (ps[b] ^ ps[a-1]) << '\n';
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    t = 1;
    while(t--)
    {
        solve();
    }
}
