#include <iostream>
#include <vector>
// You need to create a function that splits 
// an array (vector) into groups of a specified size 
// and returns a two-dimensional vector (array of arrays) 
// representing these groups.

using namespace std;

vector<vector<int>> chunkArrayInGroups(vector<int> v, int n) {
  vector<vector<int>> newV;
  vector<int> nestedV;
  for (int i = 0; i < v.size(); i++) {
    nestedV.clear();
    for (int j = 0; i < v.size() && j++ < n; i++) {
      nestedV.push_back(v[i]);
    }
    i--;
    newV.push_back(nestedV);
  }
  return newV;
}

int main() {

  vector<int> input1 = {1, 2, 3, 4, 5, 6, 7, 8};
  vector<vector<int>> result1 = chunkArrayInGroups(input1, 3);
  cout << "Test Case 1: " << (result1 == vector<vector<int>>{{1, 2, 3}, {4, 5, 6}, {7, 8}} ? "Passed" : "Failed") << endl;

  vector<int> input2 = {1, 2, 3, 4, 5, 6, 7, 8};
  vector<vector<int>> result2 = chunkArrayInGroups(input2, 4);
  cout << "Test Case 2: " << (result2 == vector<vector<int>>{{1, 2, 3, 4}, {5, 6, 7, 8}} ? "Passed" : "Failed") << endl;

  vector<int> input3 = {1, 2, 3, 4, 5, 6};
  vector<vector<int>> result3 = chunkArrayInGroups(input3, 2);
  cout << "Test Case 3: " << (result3 == vector<vector<int>>{{1, 2}, {3, 4}, {5, 6}} ? "Passed" : "Failed") << endl;

  vector<int> input4 = {1, 2, 3, 4, 5};
  vector<vector<int>> result4 = chunkArrayInGroups(input4, 1);
  cout << "Test Case 4: " << (result4 == vector<vector<int>>{{1}, {2}, {3}, {4}, {5}} ? "Passed" : "Failed") << endl;

  vector<int> input5 = {1, 2, 3, 4, 5};
  vector<vector<int>> result5 = chunkArrayInGroups(input5, 7);
  cout << "Test Case 5: " << (result5 == vector<vector<int>>{{1, 2, 3, 4, 5}} ? "Passed" : "Failed") << endl;

  return 0;
}
