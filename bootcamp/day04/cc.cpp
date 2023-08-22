/* SKEET IS HERE */

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <iomanip>
#include <map>
#include <set>

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
    vector<vector<int> > v(n, vector<int>(n));
    for (auto &it : v)
        for (auto &i : it)
            cin >> i;
    set<int> src;
    set<int> sink;
    for (int i = 1; i <= n; i++)
    {
        src.insert(i);
        sink.insert(i);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) {
            if (v[i][j] == 1) {
                src.erase(i+1);
                sink.erase(j+1);
            }
        }
    }
    cout << sink.Z << " ";
    for (auto i : sink)
        cout << i << " ";
    cout << nl;
    cout << src.Z << " ";
    for (auto i : src)
        cout << i << " ";
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
