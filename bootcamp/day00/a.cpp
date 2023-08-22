#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> v(n);

  for (auto &x : v)
    cin >> x;

  for (size_t i = 0; i < v.size(); i++) {
    if (v[i] >= 0) v[i] += 2;
    cout << v[i] << (i == v.size() - 1 ? '\n' : ' ');
  }
  return 0;
}