#include <iostream>

using namespace std;

// You need to create a function that takes a string 
// and a positive integer as input and returns a new 
// string that consists of the input string repeated 
// a specified number of times.

string repeatString(string str, int n) {
  string newStr = "";
  while (n--) {
    newStr += str;
  }
  return newStr;
}

int main() {
  cout << "Test Case 1: " << (repeatString("abc", 3) == "abcabcabc" ? "Passed" : "Failed") << endl;
  cout << "Test Case 2: " << (repeatString("Hello", 5) == "HelloHelloHelloHelloHello" ? "Passed" : "Failed") << endl;
  cout << "Test Case 3: " << (repeatString("12345", 0) == "" ? "Passed" : "Failed") << endl;
  cout << "Test Case 4: " << (repeatString("", 4) == "" ? "Passed" : "Failed") << endl;
  cout << "Test Case 5: " << (repeatString("Repeat", 1) == "Repeat" ? "Passed" : "Failed") << endl;
  cout << "Test Case 6: " << (repeatString("Spaces Between", 2) == "Spaces BetweenSpaces Between" ? "Passed" : "Failed") << endl;

  return 0;
}
