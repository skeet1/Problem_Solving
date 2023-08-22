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

vector<vector<bool> > vis(1e4+1, vector<bool>(1e4+1, false));
int res = 0;

void dfs(int i, int j, vector<vector<char> > &v)
{
    vis[i][j] = true;
    if (i > 0 && !vis[i-1][j] && v[i-1][j] == '.') dfs(i-1, j, v);
    if (i < v.Z-1 && !vis[i+1][j] && v[i+1][j] == '.') dfs(i+1, j, v);
    if (j > 0 && !vis[i][j-1] && v[i][j-1] == '.') dfs(i, j-1, v);
    if (j < v[0].Z-1 && !vis[i][j+1] && v[i][j+1] == '.') dfs(i, j+1, v);
}

void	solve()
{
    int n, m; cin >> n >> m;
    vector<vector<char> > v(n, vector<char>(m));
    for (auto &it : v)
        for (auto &i : it)
            cin >> i;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!vis[i][j] && v[i][j] == '.') {
                res++;
                vis[i][j] = true;
                dfs(i, j, v);
            }
        }
    }
    cout << res << nl;
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

