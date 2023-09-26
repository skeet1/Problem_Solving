function fibonacci(n) {
  let fib = new Array(n+1);
  fib[0] = 0;
  fib[1] = 1;
  for (let i = 2; i <= n; i++) {
    fib[i] = fib[i-1] + fib[i-2];
  }
  fib.length = n;
  return fib;
}

console.log(fibonacci(0)); // Should return []
console.log(fibonacci(1)); // Should return [0]
console.log(fibonacci(2)); // Should return [0, 1]
console.log(fibonacci(5)); // Should return [0, 1, 1, 2, 3]
console.log(fibonacci(10)); // Should return [0, 1, 1, 2, 3, 5, 8, 13, 21, 34]
console.log(fibonacci(20)); // Should return [0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181]
// console.log(fibonacci(50)); // Testing a relatively large number of terms
// console.log(fibonacci(100)); // Testing a larger number of terms

