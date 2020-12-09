let size=8;
let board="";
for(let row=1;row<=size;row++){
  if(row%2==1){
    for(let c=1;c<=size/2;c++){
      board += " #";
    }
    board += "\n";
  }
  else{
    for(let c=1;c<=size/2;c++){
      board += "# ";
    }
    board += "\n";    
  }
}
console.log(board);

// let size = 8;

// let board = "";

// for (let y = 0; y < size; y++) {
//   for (let x = 0; x < size; x++) {
//     if ((x + y) % 2 == 0) {     //行数和列数之和为奇数“#”
//       board += " ";
//     } else {
//       board += "#";
//     }
//   }
//   board += "\n";
// }

// console.log(board);