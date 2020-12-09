//   范围的和
//附加题:修改 range 函数，接受第3个可选参数step
//指定构建数组时的步长（ step ）。
//如果没有指定步长，构建数组时，每步增长 1，和旧函数行为一致。
function range(start, end, step = start < end ? 1 : -1) {
    let array = [];
    if (step > 0) {
        for (let i = start; i <= end; i += step) array.push(i);
    } else {
        for (let i = start; i >= end; i += step) array.push(i);
    }
    return array;
}
  
function sum(array) {
    let total = 0;
    for (let value of array) {
        total += value;
    }
    return total;
}
  
console.log(range(5, 2, -1));
// → [5, 4, 3, 2]
console.log(sum(range(1, 10)));
// → 55
console.log(range(1, 10, 2))