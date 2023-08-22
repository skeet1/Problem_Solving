
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);  
  cin.tie(NULL);
  int t; cin >> t;
  stack<int> st;

  while (t--) {
    int op; cin >> op;
    if (op == 1) {
      int val; cin >> val;
      st.push(val);
    }
    else if (op == 2) {
      if (!st.empty())
        st.pop();
    }
    else if (op == 3) {
      if (!st.empty())
        cout << st.top() << '\n';
      else
        cout << "Empty!" << '\n';
    }
  }

  return 0;
}