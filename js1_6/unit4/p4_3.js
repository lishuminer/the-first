//  实现列表
//有一种通用的数据结构叫作列表（list）（不要与数组混淆）。
//列表是一种嵌套对象集合，第一个对象拥有第二个对象的
//引用，而第二个对象有第三个对象的引用，依此类推。
function arrayToList(array) {
    let list = null;    //数组中的最后一个元素
    for (let i = array.length - 1; i >= 0; i--) {
        list = {value: array[i], rest: list};
    }   //倒序读取数组
    return list;
}
function listToArray(list) {
    let array = [];
    for (let node = list; node; node = node.rest) {
        array.push(node.value);
    }
    // while (node) {
    //     let node = list;
    //     array.push(node.value);
    //     node = node.rest;
    // }
    return array;
} 
function prepend(value, list) {
    return {value, rest: list};
}
function nth(list, n) {
    // for (let j = 0; j <= n; j++) {
    //     if ()
    // }
    //if (!list) return undefined;//如果list是空，!list为true
    if (n == 0) return list.value;
    else return nth(list.rest, n - 1);
}
console.log(arrayToList([10, 20]));
// → {value: 10, rest: {value: 20, rest: null}}
console.log(listToArray(arrayToList([10, 20, 30])));
// → [10, 20, 30]
console.log(prepend(10, prepend(20, null)));
// → {value: 10, rest: {value: 20, rest: null}}
console.log(nth(arrayToList([10, 20, 30]), 1));
// → 20