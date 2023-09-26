#include <iostream>

// Write a function that takes a number as input and returns its factorial.

using namespace std;

int factorialize(int num) {
  int ans = 1;

  for (int i = 2; i <= num; i++) {
    ans *= i;
  }
  return ans;
}

int main() {
  cout << "Test Case 1: " << (factorialize(5) == 120 ? "Passed" : "Failed") << endl;
  cout << "Test Case 2: " << (factorialize(0) == 1 ? "Passed" : "Failed") << endl;
  cout << "Test Case 3: " << (factorialize(1) == 1 ? "Passed" : "Failed") << endl;
  cout << "Test Case 4: " << (factorialize(10) == 3628800 ? "Passed" : "Failed") << endl;
  cout << "Test Case 5: " << (factorialize(3) == 6 ? "Passed" : "Failed") << endl;
  cout << "Test Case 6: " << (factorialize(8) == 40320 ? "Passed" : "Failed") << endl;

  return 0;
}
