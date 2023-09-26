function isPrime(n) {
  if (n <= 1) return false;
  for (let i = 2; i <= Math.sqrt(n); i++)
    if (n % i === 0)
      return false;
  return true;
}

console.log(isPrime(2)); // Should return true (2 is a prime number)
console.log(isPrime(3)); // Should return true (3 is a prime number)
console.log(isPrime(7)); // Should return true (7 is a prime number)
console.log(isPrime(9)); // Should return false (9 is not a prime number)
console.log(isPrime(11)); // Should return true (11 is a prime number)
console.log(isPrime(29)); // Should return true (29 is a prime number)
console.log(isPrime(1)); // Should return false (1 is not a prime number)
console.log(isPrime(0)); // Should return false (0 is not a prime number)
console.log(isPrime(-5)); // Should return false (-5 is not a prime number)
console.log(isPrime(9999991)); // Should return true (a large prime number)
console.log(isPrime(10000019)); // Should return true (another large prime number)
console.log(isPrime(1000000007)); // Should return true (yet another large prime number)
console.log(isPrime(1000000008)); // Should return true (yet another large prime number)
