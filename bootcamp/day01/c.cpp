/* SKEET IS HERE */
 
#include <iostream>
#include <cmath>
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

void	solve()
{
    int n, x; cin >>n >> x;
    vi t(n);
    vi ps(n+1);
    ps[0] = 0;
    map<int, int> mp;
    mp[ps[0]]++;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
        ps[i+1] = ps[i] + t[i];
        if (mp[ps[i+1]-x])
            ans += mp[ps[i+1]-x];
        mp[ps[i+1]]++;
    }
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