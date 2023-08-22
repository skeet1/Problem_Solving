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

bool found(vi &v, int val) {
    int l = 0;
    int r = v.size();

    while (l < r) {
        int mid = (l + r) / 2;
        if (v[mid] == val)
            return true;
        if (v[mid] >= val)
            r = mid;
        else
            l = mid + 1;
    }
    return false;
}

void	solve()
{
    int n; cin >> n;
    vi butt(n);

    for (auto &v : butt)
        cin >> v;
    
    int m; cin >> m;

    for (int i = 0; i < m; i++) {
        int v; cin >> v;
        cout << (found(butt, v) ? "YES\n" : "NO\n" ) ;
    }

}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    t = 1;
    // cin >> t;
    while(t--)
    {
        solve();
    }
}
