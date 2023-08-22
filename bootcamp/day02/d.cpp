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
const int mod = 1e9 + 7;
ll gcd(ll a, ll b) {return (b==0? a:gcd(b,a%b));}

bool cmp(pair<string, int>& a, pair<string, int>& b)
{
    return a.second < b.second;
}

void	solve()
{
    int n; cin >> n;

    int l = 1, r = 1414213561;
    int res = 0;
    while (l <= r) {
        int mid = (l + r) / 2;
        // cout << l << " " << r << nl;
        int ans = mid * (mid + 1) / 2;
        if (ans <= n) {
            res = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    cout << res << nl;
    // int stair = 1;
    // int ans = 0;
    // while (n - stair >= 0) {
    //     ans++;
    //     n -= stair;
    //     stair++;
    // }
    // cout << ans << nl;
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
