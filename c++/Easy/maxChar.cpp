#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <map>

using namespace std; 

int main() {
  vector<int> v(26);

  string s;
  getline(cin, s);
  for (int i = 0; i < s.length(); i++) {
    v[s[i] - 'a']++;
  }
  pair<char, int> val;
  for (int i = 0; i < 26; i++) {
    if (v[i] != 0 && v[i] > val.second) {
      val.first = char('a' + i);
      val.second = v[i];
    }
  }
  cout << val.first << " " << val.second << endl;
}
