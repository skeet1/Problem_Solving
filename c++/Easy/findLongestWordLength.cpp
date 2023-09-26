#include <iostream>
#include <string>

// Write a function that takes a string as input and 
// returns the length of the longest word.

using namespace std;

int findLongestWordLength(string str) {
  int currentLength = 0;
  int ans = 0;
  for (int i = 0; i < str.length(); i++) {
    if (isspace(str[i])) {
      ans = max(ans, currentLength);
      currentLength = 0;
      continue;
    }
    currentLength++;
  }
  ans = max(ans, currentLength);
  return ans;
}

int main() {
  cout << "Test Case 1: " << (findLongestWordLength("The quick brown fox jumped over the lazy dog") == 6 ? "Passed" : "Failed") << endl;
  cout << "Test Case 2: " << (findLongestWordLength("Hello world") == 5 ? "Passed" : "Failed") << endl;
  cout << "Test Case 3: " << (findLongestWordLength("I love coding") == 6 ? "Passed" : "Failed") << endl;
  cout << "Test Case 4: " << (findLongestWordLength("This is a test") == 4 ? "Passed" : "Failed") << endl;
  cout << "Test Case 5: " << (findLongestWordLength("Supercalifragilisticexpialidocious") == 34 ? "Passed" : "Failed") << endl;
  cout << "Test Case 6: " << (findLongestWordLength("a b c d e f g h i j k l m n o p q r s t u v w x y z") == 1 ? "Passed" : "Failed") << endl;

  return 0;
}