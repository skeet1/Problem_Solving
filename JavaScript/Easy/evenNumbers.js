function filterEvenNumbers(arr) {
  return arr.filter((el) => el % 2 === 0)

}

console.log(filterEvenNumbers([1, 2, 3, 4, 5, 6])); // [2, 4, 6]
console.log(filterEvenNumbers([2, 4, 6, 8, 10])); // [2, 4, 6, 8, 10]
console.log(filterEvenNumbers([1, 3, 5, 7, 9])); // []
console.log(filterEvenNumbers([])); // []
console.log(filterEvenNumbers([-2, -1, 0, 1, 2])); // [-2, 0, 2]
