//判断一个数是否是偶数
function isEven(n){
  if(n%2==0){
    return true;
  } else{
    return false;
  }
}  
console.log(isEven(50));
console.log(isEven(75));
console.log(isEven(-1));

//递归法
// function isEven(n) {
//     if (n == 0) return true;
//     else if (n == 1) return false;
//     else if (n < 0) return isEven(-n);  
//     else return isEven(n - 2);
//   }
  
//   console.log(isEven(50));
//   // → true
//   console.log(isEven(75));
//   // → false
//   console.log(isEven(-1));
//   // → false