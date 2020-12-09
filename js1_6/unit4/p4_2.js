//  逆转数组（题目要求：两者都不能使用标准的 reverse 方法）
//reverseArray 接受一个数组作为参数，返回一个新数组，并逆转新数组中的元素次序。
//reverseArrayInPlace 直接将数组作为参数进行修改，逆转数组中的元素次序。
function reverseArray(array) {
    let output = [];
    for (let i = array.length - 1; i >= 0; i--) {
      output.push(array[i]);
    }
    return output;  //输出新数组
}
  
function reverseArrayInPlace(array) {
    for (let i = 0; i < Math.floor(array.length / 2); i++) {//奇数时向下取整，从而中间的数不变
      let temp = array[i];
      array[i] = array[array.length - 1 - i];
      array[array.length - 1 - i] = temp;
    }
    return array;   //输出逆转后的旧数组
}
  
console.log(reverseArray(["A", "B", "C"]));
// → ["C", "B", "A"];
let arrayValue = [1, 2, 3, 4, 5];
reverseArrayInPlace(arrayValue);
console.log(arrayValue);
// → [5, 4, 3, 2, 1]