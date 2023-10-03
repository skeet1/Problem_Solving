function isAlpha(c) {
  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    return true;
  return false;
}

function isNum(c) {
  if (c >= '0' && c <= '9')
    return true;
  return false;
}

function isAlnum(c) {
  return isAlpha(c) && isNum(c);
}

console.log(isNum('9'));
console.log(isAlpha('h'));
console.log(isAlnum('h'));

// function isAlnumPalindrome(str) {
//   let newStr = Array.from(str).filter((el) => (isAlnum(el)))
//   console.log(newStr);
// }

// console.log(isAlnumPalindrome("racecar")); // Should return true
// console.log(isAlnumPalindrome("A man, a plan, a canal, Panama")); // Should return true
// console.log(isAlnumPalindrome("Was it a car or a cat I saw?")); // Should return true
// console.log(isAlnumPalindrome("Hello, World!")); // Should return false
// console.log(isAlnumPalindrome("No lemon, no melon")); // Should return true
// console.log(isAlnumPalindrome("12321")); // Should return true
// console.log(isAlnumPalindrome("123456")); // Should return false
// console.log(isAlnumPalindrome("A")); // Should return true (single character)
// console.log(isAlnumPalindrome("")); // Should return true (empty string)
