// Approach 1
// function maxOfArray(arr) {
//   arr.sort((a, b) => (a - b));

//   return arr[arr.length - 1];
// }

// Approach 2
function maxOfArray(arr)  {
  return Math.max(...arr)
}

console.log(maxOfArray([1, 3, 2, 8, 4, 9]));
console.log(maxOfArray([-1, -5, -3, -8, -4, -9])); 
console.log(maxOfArray([5]));
console.log(maxOfArray([]));
console.log(maxOfArray([1337, 42, 42]));

