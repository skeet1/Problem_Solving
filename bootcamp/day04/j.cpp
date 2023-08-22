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

bool cycl = false;

void    dfs(int n, vector<vector<int> > &adj, vector<bool> &v)
{
    if (cycl || v[n]) return ;
    v[n] = true;
    for (auto u:adj[n])
    {
        if (v[u])
        {
            cycl = true;
            return;
        }
        dfs(u, adj, v);
    }
    v[n] = false;
}

void	solve()
{
    int n; cin >> n;
    vector<vector<int> > adj(n+1);
    vector<bool> v(n+1, false);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int v; cin >> v;
            if (v)
            {
                adj[i+1].PB(j+1);
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (!cycl && !v[i])
            dfs(i, adj, v);
    }
    if (cycl) cout << "1\n";
    else cout << "0\n";
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

