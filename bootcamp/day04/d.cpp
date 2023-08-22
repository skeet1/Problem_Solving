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

void	solve()
{
    int n; cin >> n;
    vector<vector<int> > v(n);
    int k; cin >> k;
    while (k--) {
        int op; cin >> op;
        if (op == 1) {
            int a, b; cin >> a >> b;
            v[a - 1].PB(b);
            v[b - 1].PB(a);
        }
        if (op == 2) {
            int u; cin >> u;
            bool print = false;
            for (int i = 0; i < v[u-1].Z; i++) {
                print = true;
                cout << v[u-1][i] << " ";
            }
            if (print) cout << nl;
        }
    }
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

