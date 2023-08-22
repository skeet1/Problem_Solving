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

const int mod = 1e9+7;

bool cmp(pair<string, int>& a, pair<string, int>& b)
{
    return a.second < b.second;
}

int bin_exp(int a, int b, int c) {
    if (b == 0)
        return 1;
    if (b == 1)
        return a;
    int res = bin_exp(a, b / 2, c);
    res = res * res % (mod - c);
    if (b & 1)
        res = res * a % (mod - c);
    return res;
}

void	solve()
{
    int a, b, c; cin >> a >> b >> c;
    cout << bin_exp(a, bin_exp(b, c, 1), 0) << '\n';
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    // t = 1;
    while(t--)
    {
        solve();
    }
}
