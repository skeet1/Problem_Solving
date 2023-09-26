#include <iostream>

// Write a function that checks whether
// a given string is a palindrome.

using namespace std;

bool isPalindrome(string str) {
  for (int i = 0; i < str.length() / 2; i++) {
    if (str[i] != str[str.length() - 1 - i])
      return false;
  }
  return true;
}

int main() {
  cout << "Test Case 1: " << (isPalindrome("racecar") == true ? "Passed" : "Failed") << endl;
  cout << "Test Case 2: " << (isPalindrome("hello") == false ? "Passed" : "Failed") << endl;
  cout << "Test Case 3: " << (isPalindrome("A manplanalpnam A") == true ? "Passed" : "Failed") << endl;
  cout << "Test Case 4: " << (isPalindrome("level") == true ? "Passed" : "Failed") << endl;
  cout << "Test Case 5: " << (isPalindrome("lemon") == false ? "Passed" : "Failed") << endl;
  cout << "Test Case 6: " << (isPalindrome("notapalindrome") == false ? "Passed" : "Failed") << endl;

  return 0;
}

