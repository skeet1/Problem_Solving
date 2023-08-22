#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> v(n);

  for (auto &x : v)
    cin >> x;

  sort(v.begin(), v.end());
  for (size_t i = 0; i < v.size(); i++) {
    cout << v[i] << (i == v.size() - 1 ? '\n' : ' ');
  }
  return 0;
}