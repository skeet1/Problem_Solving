/* SKEET IS HERE */

#include <iostream>
#include <complex>
#include <iomanip>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>
#include <vector>
#include <cmath>
#include <map>
#include <set>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

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

void    dfs(int n, vector<vector<int> > &adj, vector<bool> &v, vi &res)
{
    if (v[n]) return;
    v[n] = true;
    for (auto u:adj[n])
    {
        if (!v[u])
        {
            dfs(u, adj, v, res);
            res[n] += res[u] + 1;
        }
    }
}

void	solve()
{
    int n; cin >> n;
    vi t(n);
    t[0] = n;
    vector<vector<int> > adj(n+1);
    vi res(n+1, 0);
    vector<bool> v(n+1, false);
    for (int i = 1; i < n; i++)
    {
        cin >> t[i];
        adj[t[i]].PB(i+1);
        adj[i+1].PB(t[i]);
    }
    dfs(1, adj, v, res);
    for (int i = 1; i <= n; i++)
    {
        cout << res[i];
        if (i < n)
            cout << " ";
    }
    cout << nl;
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

