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
    int n; cin >> n;
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        string s; cin >> s;
        mp[s]++;
    }
    int res = 0;
    string r;
    for (auto it = mp.B; it != mp.E; it++)
    {
        if (it->S >= res)
        {
            res = it->S;
            r = it->F;
        }
    }
    cout << r << " " << res << nl;
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
