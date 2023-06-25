// I IMPLEMENT THREE WAYS TO REVERSE STRING FELL FREE TO CHECK BOTH

function reverseString(s)
{
  return s.split("").reverse().join("");
}

// function reverseString(s)
// {
//   let arr = s.split("");
//   for (let i = 0; i < arr.length / 2; i++)
//     [arr[i], arr[arr.length - 1 - i]] = [arr[arr.length - 1 - i], arr[i]];

//   return arr.join("");
// }

// function reverseString(s) {
//   let newS = "";

//   for (let i = s.length - 1; i >= 0; i--)
//     newS += s[i];
//   return newS;
// }

console.log(reverseString("Hello World!"));
