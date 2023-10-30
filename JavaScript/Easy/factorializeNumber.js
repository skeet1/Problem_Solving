// Task Statement:
// Create a function that takes an integer num as an argument and returns the factorial of the provided integer. A factorial is the product of all positive integers less than or equal to num. For example, the factorial of 5 is 5 * 4 * 3 * 2 * 1 = 120.

function factorialize(n) {
  if (n <= 1)
    return 1;
  return n * factorialize(n-1);
}

function testFactorialize() {
  const result1 = factorialize(5);
  console.log("Test Case 1: " + (result1 === 120 ? "PASSED" : "FAILED"));

  const result2 = factorialize(0);
  console.log("Test Case 2: " + (result2 === 1 ? "PASSED" : "FAILED"));

  const result3 = factorialize(1);
  console.log("Test Case 3: " + (result3 === 1 ? "PASSED" : "FAILED"));

  const result4 = factorialize(10);
  console.log("Test Case 4: " + (result4 === 3628800 ? "PASSED" : "FAILED"));

  const result5 = factorialize(3);
  console.log("Test Case 5: " + (result5 === 6 ? "PASSED" : "FAILED"));

  const result6 = factorialize(7);
  console.log("Test Case 6: " + (result6 === 5040 ? "PASSED" : "FAILED"));
}

testFactorialize();

