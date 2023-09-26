function findLargestInNestedArray(arr) {
  let ans;
  if (arr.length)
    ans = arr[0][0];
  for (let nested of arr) {
    ans = Math.max(ans, Math.max(...nested))
  }
  return ans;
}

console.log(findLargestInNestedArray([[1, 2, 3], [4, 5, 6], [7, 8, 9]])); // Should return 9
console.log(findLargestInNestedArray([[11, 42, 13], [24, 15, 6], [7, 18, 29]])); // Should return 42
console.log(findLargestInNestedArray([[99, 88], [77, 66, 55], [44, 33, 22, 11]])); // Should return 99
console.log(findLargestInNestedArray([[1], [2], [3], [4]])); // Should return 4
console.log(findLargestInNestedArray([])); // Should return undefined (empty nested array)
