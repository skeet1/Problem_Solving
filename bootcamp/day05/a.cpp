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
 
struct SegmentTree
{
    int len;
    vector<int> t;
    vector<int> seg;
    SegmentTree(vector<int> inp)
    {
        len = inp.Z;
        t = inp;
        seg.resize(len*4);
        build(1, 0, len-1);
    }
    void build(int id, int l, int r)
    {
        if (l == r)
        {
            seg[id] = t[l];
            return ;
        }
        int mid = (l+r)/2;
        build(2*id, l, mid);
        build(2*id+1, mid+1, r);
        seg[id] = seg[2*id] + seg[2*id + 1];
    }
    int query(int id, int l, int r, int ql, int qr)
    {
        if (r < ql || l > qr) return 0;
        if (ql <= l && qr >= r) return (seg[id]);
        int mid = (l+r)/2;
        return (query(2*id, l, mid, ql, qr) + query(2*id + 1, mid+1, r, ql, qr));
    }
    void update(int id, int l, int r, int pos, int val)
    {
        if (!(pos >= l && pos <= r)) return ;
        if (l == r)
        {
            seg[id] = val;
            return ;
        }
        int mid = (l+r)/2;
        update(2*id, l, mid, pos, val);
        update(2*id + 1, mid+1, r, pos, val);
        seg[id] = seg[2*id] + seg[2*id + 1];
    }
    void update(int pos, int val)
    {
        update(1, 0, len-1, pos, val);
    }
    int query(int ql, int qr)
    {
        return (query(1, 0, len-1, ql, qr));
    }
};

void	solve()
{
    int n, q; cin >> n >> q;
    vi t(n);
    for (int i = 0; i < n; i++) cin >> t[i];
    SegmentTree seg(t);
    for (int i = 0; i < q; i++)
    {
        int o; cin >> o;
        int l, r; cin >> l >> r;
        if (o == 1) seg.update(l-1, r);
        else if (o == 2)
            cout << seg.query(l-1, r-1) << nl;
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