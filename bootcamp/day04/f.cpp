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

int res = 0;

void    dfs(int i, vector<vector<int> > &t, vector<bool> &vis)
{
    if (!vis[i])
    {
        vis[i] = true;
        for (auto v:t[i])
        {
            // vis[v] = true;
            dfs(v, t, vis);
        }
    }
}

void	solve()
{
    int n; cin >> n;
    vector<vector<int> > t(n);
    vector<bool> vis(n, false);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int v; cin >> v;
            if (v)
                t[i].PB(j);
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            res++;
            dfs(i, t, vis);
        }
    }
    cout << res << nl;
    // for (int i = 0; i < n; i++)
    // {
    //     for (auto v:t[i])
    //         cout << i+1 << " " << v+1 << "   -   ";
    //     cout << nl;
    // }
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

