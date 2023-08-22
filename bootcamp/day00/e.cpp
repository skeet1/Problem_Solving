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
    set<int> st;
    string s;
    int x;
    while ((cin >> s) && (cin >> x))
    {
        if (s.L == 0)
            return ;
        if (s[0] == 'i')
            st.insert(x);
        if (s[0] == 'd')
            st.erase(x);
        if (s[0] == 'e')
        {
            if (st.count(x))
                cout << "true" << nl;
            else
                cout << "false" << nl;
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
