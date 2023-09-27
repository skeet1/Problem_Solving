#include <iostream>

using namespace std;

// You need to create a function that takes two strings 
// as input and determines if all the letters in the 
// second string exist in the first string

bool charExist(string s, char c) {
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == c)
      return true;
  }
  return false;
}

bool mutation(string str1, string str2) {
  for (int i = 0; i < str2.length(); i++) {
    if (!charExist(str1, str2[i]))
      return false;
  }
  return true;
}

int main() {
  {
    string str1 = "Hello";
    string str2 = "Hello";
    bool result = mutation(str1, str2);
    cout << "Test Case 1: " << (result == true ? "Passed" : "Failed") << endl;
  }

  {
    string str1 = "hello";
    string str2 = "hey";
    bool result = mutation(str1, str2);
    cout << "Test Case 2: " << (result == false ? "Passed" : "Failed") << endl;
  }

  {
    string str1 = "zyxwvutsrqponmlkjihgfedcba";
    string str2 = "abcdefghijklmnopqrstuvwxyz";
    bool result = mutation(str1, str2);
    cout << "Test Case 3: " << (result == true ? "Passed" : "Failed") << endl;
  }

  {
    string str1 = "hello";
    string str2 = "neo";
    bool result = mutation(str1, str2);
    cout << "Test Case 4: " << (result == false ? "Passed" : "Failed") << endl;
  }

  {
    std::string str1 = "voodoo";
    std::string str2 = "no";
    bool result = mutation(str1, str2);
    cout << "Test Case 5: " << (result == false ? "Passed" : "Failed") << endl;
  }

  return 0;
}

