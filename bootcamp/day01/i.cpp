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

void printV(std::vector<int>& v) {
    cout << v.Z << nl;
    for (int i = 0; i < v.Z; i++) {
        cout << v[i] << (i == v.Z - 1 ? '\n' : ' ');
    }
}

void	solve()
{
    int n; cin >> n;
    int goal = (n * (n + 1)) / 2;
    if (goal & 1) {
        cout << "NO" << nl;
        return ;
    }
    vi s1, s2;
    int sumS1 = 0;
    for (int i = n; i > 0; i--) {
        if (sumS1 + i <= goal / 2)  {
            s1.PB(i);
            sumS1 += i;
        }
        else
            s2.PB(i);
    }
    cout << "YES" << nl;
    printV(s1);
    printV(s2);
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
