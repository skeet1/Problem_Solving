function calculateFactorial(num) {
  let res = 1;
  for (let i = 2; i <= num; i++) {
    res *= i;
  }
  return res;
}

console.log(calculateFactorial(0)); // Should return 1
console.log(calculateFactorial(1)); // Should return 1
console.log(calculateFactorial(5)); // Should return 120
console.log(calculateFactorial(10)); // Should return 3628800
console.log(calculateFactorial(20)); // Should return 2432902008176640000
