#include <iostream>
#include <vector>

using namespace std;

// You need to create a function that takes an array (vector) 
// and an integer howMany as input and returns a new array 
// with the first howMany elements removed.

vector<int> slasher(vector<int> &v, int n) {
  if (v.size() < n)
    return vector<int>();
  vector<int> newV(v.begin() + n, v.end());
  return newV;
}

int main() {
  std::vector<int> input1 = {1, 2, 3, 4, 5, 6, 7, 8};
  std::vector<int> result1 = slasher(input1, 2);
  cout << "Test Case 1: " << (result1 == std::vector<int>{3, 4, 5, 6, 7, 8} ? "Passed" : "Failed") << endl;

  std::vector<int> input2 = {1, 2, 3, 4, 5, 6};
  std::vector<int> result2 = slasher(input2, 3);
  cout << "Test Case 2: " << (result2 == std::vector<int>{4, 5, 6} ? "Passed" : "Failed") << endl;

  std::vector<int> input3 = {1, 2, 3, 4, 5, 6, 7};
  std::vector<int> result3 = slasher(input3, 0);
  cout << "Test Case 3: " << (result3 == std::vector<int>{1, 2, 3, 4, 5, 6, 7} ? "Passed" : "Failed") << endl;

  std::vector<int> input4 = {1, 2, 3, 4};
  std::vector<int> result4 = slasher(input4, 10);
  cout << "Test Case 4: " << (result4 == std::vector<int>{} ? "Passed" : "Failed") << endl;

  std::vector<int> input5 = {};
  std::vector<int> result5 = slasher(input5, 2);
  cout << "Test Case 5: " << (result5 == std::vector<int>{} ? "Passed" : "Failed") << endl;

  return 0;
}

