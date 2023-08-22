/* SKEET IS HERE */

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <iomanip>
#include <queue>
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


signed main()
{
    int n, q; cin >> n >> q;
		vector<priority_queue<int> > vpq(n);
    while(q--)
    {
			int op, t; cin >> op >> t;
			if (op == 0) {
				int val; cin >> val;
				vpq[t].push(val);
			}
			else if (op == 1) {
				if (!vpq[t].empty())
					cout << vpq[t].top() << '\n';
			}
			else if (op == 2) {
				if (!vpq[t].empty())
					vpq[t].pop();
			}
    }
}