#include<iostream>
using namespace std;

/* 
 BaekJoon_2580 : 스도쿠
0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0
*/

int sudoku[81];
int numZero = 0;

int testSudoku(){
  for(int col=0; col<9; col++){
    for(int row=0; row<9; row++){
      if(sudoku[col*9 + row] == 0){
        return 0;
      }
    }
  }
  return 1;
}

void printSudoku(){
  for(int col=0; col<9; col++){
    for(int row=0; row<9; row++){
      printf("%d ", sudoku[col*9 + row]);
    }
    cout << endl;
  }
}

int testNum(int cnt, int num){
  int col, row;
  int colL, rowL;

  col = cnt/9;
  row = cnt%9;
  if(col < 3) colL=0;
  else if(col < 6) colL=3;
  else colL =6;

  if(row < 3) rowL=0;
  else if(row < 6) rowL=3;
  else rowL =6;
  
  for(int i=0; i<9; i++){
    if(sudoku[col*9 + i] == num || sudoku[i*9 + row] == num) return 0;
  }
  for(int c=colL; c<colL+3; c++){
    for(int l=rowL; l<rowL+3; l++){
      if(sudoku[c*9 + l] == num) return 0;
    }
  }
  return 1;
}

void fillSudoku(int cnt){
  if(cnt == 81){
    printSudoku();
    return;
  }
  if(sudoku[cnt] != 0) fillSudoku(cnt+1);
  else{
    for(int i=1; i<=9; i++){
      if(testNum(cnt,i)){
        sudoku[cnt] = i;
        /*
        cout << endl;
        printSudoku();
        cout << endl;
        */
        fillSudoku(cnt+1);
      }
      sudoku[cnt] = 0;
    }
  }
  
}

int main() {
  for(int col=0; col<9; col++){
    for(int row=0; row<9; row++){
      scanf("%d", &sudoku[col*9 + row]);
    }
  }
  
  fillSudoku(0);
  return 0;
}
