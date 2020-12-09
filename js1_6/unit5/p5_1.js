//将二维数组转化为一维--reduce，concat
var flattened = [[1, 2, 3], [4, 5], [6]].reduce(
    function (a, b) {
        return a.concat(b);
    }, []
);
console.log(flattened);
//箭头函数
// let arrays = [[1, 2, 3], [4, 5], [6]];
// console.log(arrays.reduce((flat, current) => flat.concat(current), []));
// → [1, 2, 3, 4, 5, 6]