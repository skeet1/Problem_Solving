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
    int n; cin >> n;
    const int mod = 1e9+7;
    vector<string> vs(n);
    for (auto &&ss : vs)
        cin >> ss;
    vector<vector<int> > v(n+1, vector<int> (n+1, 0));
    v[1][1] = (vs[0][0] == '.');
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 && j == 1)
                continue;
            if (vs[i-1][j-1] == '*')
                v[i][j] = 0;
            else
                v[i][j] = (v[i-1][j] + v[i][j-1]) % mod;
        }
    }
    // for (int i = 0; i <= n; i++) {
    //     for (int j = 0; j <=n; j++) {
    //         cout << v[i][j] << ' ';
    //     }
    //     cout << nl;
    // }
    cout << v[n][n] << nl;
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