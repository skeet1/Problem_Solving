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
ll gcd(ll a, ll b) {return (b==0? a:gcd(b,a%b));}

void	solve()
{
    int n; cin >> n;
    set<pair<int, int> > st;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int v; cin >> v;
            if (v == 1)
            {
                int a = min(i+1, j+1);
                int b = max(i+1, j+1);
                st.insert(MP(a,b));
            }
        }
    }
    for (auto it = st.B; it!= st.E; it++)
        cout << it->F << " " << it->S << nl;
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

