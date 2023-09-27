#include <iostream>

using namespace std;

// You need to create a function that takes a string 
// and a specified maximum length as input and returns 
// a truncated version of the string. If the string 
// length exceeds the maximum length, it should be 
// truncated and "..." (three dots) should be appended 
// to the end. If the string length is less than or 
// equal to the maximum length, it should be 
// returned as is.

string truncateString(string str, int len) {
  if (str.length() < len)
    return str;
  string newStr = "";
  for (int i = 0; i < len; i++) {
    newStr += str[i];
  }
  newStr += "...";
  return newStr;
}

int main() {
  cout << "Test Case 1: " << (truncateString("Hello, world!", 5) == "Hello..." ? "Passed" : "Failed") << endl;
  cout << "Test Case 2: " << (truncateString("This is a test", 15) == "This is a test" ? "Passed" : "Failed") << endl;
  cout << "Test Case 3: " << (truncateString("Short", 10) == "Short" ? "Passed" : "Failed") << endl;
  cout << "Test Case 4: " << (truncateString("A B C D E F G", 8) == "A B C D ..." ? "Passed" : "Failed") << endl;
  cout << "Test Case 5: " << (truncateString("", 5) == "" ? "Passed" : "Failed") << endl;
  cout << "Test Case 6: " << (truncateString("Testing", 3) == "Tes..." ? "Passed" : "Failed") << endl;

  return 0;
}
