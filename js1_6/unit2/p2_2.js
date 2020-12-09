for(let n=1;n<=100;n++){
  let output="";
  if(n % 3 == 0){
    output += "Fizz";
  }
  if(n % 5 == 0){
    output += "Buzz";
  }
  if((n % 3 != 0)&&(n % 5 != 0)) {
    output += `${n}`;
  }
  console.log(output);
}

// for (let n = 1; n <= 100; n++) {
//     let output = "";
//     if (n % 3 == 0) output += "Fizz";
//     if (n % 5 == 0) output += "Buzz";
//     console.log(output || n);
// }