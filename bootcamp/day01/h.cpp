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

bool cmp(pair<string, int>& a, pair<string, int>& b)
{
    return a.second < b.second;
}

void	solve()
{
  int n; cin >> n;
  char d; cin >> d;
  string s; cin >> s;
  for (int i = 0; i < n; i++) {
    if (s[i] >= d)
      cout << s[i];
    else {
      cout << d << s.substr(i, n) << nl;
      return ;
    }
  }
  cout << d << nl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
