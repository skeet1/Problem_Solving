#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Write a function that takes an array of arrays as input and 
// returns an array with the largest number from each of the sub arrays.

vector<int> largestNumbersOfArrays(vector<vector<int>> arr) {
  vector<int> res;

  for (int i = 0; i < arr.size(); i++) {
    sort(arr[i].begin(), arr[i].end());
    res.push_back(arr[i][arr[i].size() - 1]);
  }
  return res;
}

int main() {
  vector<vector<int>> test1 = {{4, 5, 1, 3}, {13, 27, 18, 26}, {32, 35, 37, 39}, {1000, 1001, 857, 1}};
  vector<int> result1 = largestNumbersOfArrays(test1);
  cout << "Test Case 1: ";
  if (result1 == vector<int>{5, 27, 39, 1001}) {
    cout << "Passed" << endl;
  } else {
    cout << "Failed" << endl;
  }

  vector<vector<int>> test2 = {{13, 27, 18, 26}, {4, 5, 1, 3}, {32, 35, 37, 39}, {1000, 1001, 857, 1}};
  vector<int> result2 = largestNumbersOfArrays(test2);
  cout << "Test Case 2: ";
  if (result2 == vector<int>{27, 5, 39, 1001}) {
    cout << "Passed" << endl;
  } else {
    cout << "Failed" << endl;
  }

  vector<vector<int>> test3 = {{4, 9, 1, 3}, {13, 35, 18, 26}, {32, 35, 97, 39}, {1000000, 1001, 857, 1}};
  vector<int> result3 = largestNumbersOfArrays(test3);
  cout << "Test Case 3: ";
  if (result3 == vector<int>{9, 35, 97, 1000000}) {
    cout << "Passed" << endl;
  } else {
    cout << "Failed" << endl;
  }

  return 0;
}
