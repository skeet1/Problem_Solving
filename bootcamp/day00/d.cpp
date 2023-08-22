/* SKEET IS HERE */

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <iomanip>
#include <map>
#include <stack>

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

void    solve()
{
    string s;
    getline(cin, s);
    stack<char> st;
    for (int i = 0; i < s.L; i++)
    {
        if (s[i] == '(' || s[i] == '[')
            st.push(s[i]);
        else if (s[i] == ')' || s[i] == ']')
        {
            if (st.empty())
            {
                cout << "No\n";
                return ;
            }
            if (st.top() == '(' && s[i] == ')' || st.top() == '[' && s[i] == ']')
                st.pop();
        }
        else
            st.push(s[i]);
    }
    if (st.empty())
        cout << "Yes\n";
    else
        cout << "No\n";
}

signed main()
{

    int t;
    scanf("%lld\n", &t);
    while(t--)
    {
        solve();
    }
}