#include <iostream>
#include <string>

using namespace std;

// You need to write a function that checks 
// if a given string ends with a specified 
// target string. The function should return true 
// if the original string ends with the target string, 
// and false otherwise.

bool confirmEnding(string str, string target) {
  size_t targetLen = target.length();
  if (str.length() < targetLen)
    return false;
  for (size_t i = str.length() - targetLen; i < str.length(); i++) {
    if (str[i] != target[i - str.length() + targetLen])
      return false;
  }
  return true;
}

int main() {
cout << "Test Case 1: " << (confirmEnding("Hello, world!", "world!") == true ? "Passed" : "Failed") << endl;
cout << "Test Case 2: " << (confirmEnding("Abracadabra", "abra") == true ? "Passed" : "Failed") << endl;
cout << "Test Case 3: " << (confirmEnding("OpenAI GPT-3.5", "AI GPT-3.5") == true ? "Passed" : "Failed") << endl;
cout << "Test Case 4: " << (confirmEnding("Hello", "Hello") == true ? "Passed" : "Failed") << endl;
cout << "Test Case 5: " << (confirmEnding("This is a test", "test") == true ? "Passed" : "Failed") << endl;
cout << "Test Case 6: " << (confirmEnding("Hello", "world") == false ? "Passed" : "Failed") << endl;
cout << "Test Case 7: " << (confirmEnding("123456789", "789") == true ? "Passed" : "Failed") << endl;
cout << "Test Case 8: " << (confirmEnding("The quick brown fox", "brown fox") == true ? "Passed" : "Failed") << endl;
cout << "Test Case 9: " << (confirmEnding("Programming is fun", "is fun") == true ? "Passed" : "Failed") << endl;
cout << "Test Case 10: " << (confirmEnding("This is a test", "notatest") == false ? "Passed" : "Failed") << endl;

  return 0;
}
