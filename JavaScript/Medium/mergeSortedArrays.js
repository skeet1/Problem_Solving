function mergeSortedArrays(arr1, arr2) {
  let merged = [];
  let ind1 = 0, ind2 = 0;
  while (ind1 < arr1.length && ind2 < arr2.length) {
    // console.log(`We are on ind1: ${ind1} and ind2: ${ind2}`);
    // console.log(merged)
    if (ind1 < arr1.length && arr1[ind1] < arr2[ind2])
      merged.push(arr1[ind1++]);
    else if (ind2 < arr2.length)
      merged.push(arr2[ind2++]);
  }
  merged.push(...arr1.slice(ind1));
  merged.push(...arr2.slice(ind2));
  return merged;
}

console.log(mergeSortedArrays([1, 3, 5], [2, 4, 6])); // Should return [1, 2, 3, 4, 5, 6]
console.log(mergeSortedArrays([-5, 0, 5, 10], [-10, -5, 0, 5, 10])); // Should return [-10, -5, -5, 0, 0, 5, 5, 10, 10]
console.log(mergeSortedArrays([], [1, 2, 3])); // Should return [1, 2, 3] (one of the arrays is empty)
console.log(mergeSortedArrays([1, 2, 3], [])); // Should return [1, 2, 3] (one of the arrays is empty)
console.log(mergeSortedArrays([], [])); // Should return [] (both arrays are empty)
console.log(mergeSortedArrays([1, 2, 4], [3, 5, 6])); // Should return [1, 2, 3, 4, 5, 6] (arrays of different lengths)
