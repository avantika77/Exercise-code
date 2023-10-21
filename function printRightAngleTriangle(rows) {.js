function printRightAngleTriangle(rows) {
  for (let i = 1; i <= rows; i++) {
    let row = '';
    for (let j = 1; j <= i; j++) {
      row += '* ';
    }
    console.log(row); //printing statement 
  }
}
printRightAngleTriangle(5);//function call and no of rows given (5)
