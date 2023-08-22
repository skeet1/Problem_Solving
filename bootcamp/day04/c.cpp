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
    set<int> src;
    set<int> sink;
    for (int i = 1; i <= n; i++)
    {
        src.insert(i);
        sink.insert(i);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int v; cin >> v;
            if (v)
            {
                src.erase(j+1);
                sink.erase(i+1);
            }
        }
    }
    cout << src.Z;
    for (auto it = src.B; it!= src.E; it++)
    {
        cout << " " << *it;
    }
    cout << nl;
    cout << sink.Z;
    for (auto it = sink.B; it!= sink.E; it++)
        cout << " " << *it;
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

