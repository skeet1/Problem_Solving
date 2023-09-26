#include <iostream>

// Write a function that reverses a string.

using namespace std;

string reverseString(string s) {
  string revStr = "";

  for (int i = s.length() - 1; i >= 0; i--) {
    revStr += s[i];
  }
  return revStr;
}

int main() {
  cout << reverseString("Hello world!") << endl;
  return 0;
}
