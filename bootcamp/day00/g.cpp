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
#define REP(i,a,b) for (int i = a; i < b; i++)
#define L length()
 
void	solve()
{
	int n, x;
	cin >> n >> x;
	map<int,int> tab;
	for (int i = 0; i < n; i++)
	{
		int val;
		cin >> val;
		if (tab.count(x-val))
		{
			cout << tab[x-val] << " " << i+1;
			return ;
		}
		tab[val] = i + 1;
	}
	cout << "IMPOSSIBLE";
}

signed main()
{
    int t;
	  t = 1;
    while(t--)
    {
        solve();
        cout << nl;
    }
}