#include<iostream>
#include<vector>
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

int sudoku[9][9];
int numZero = 0;

int testSudoku(){
  for(int col=0; col<9; col++){
    for(int row=0; row<9; row++){
      if(sudoku[col][row] == 0){
        return 0;
      }
    }
  }
  return 1;
}

void printSudoku(){
  for(int col=0; col<9; col++){
    for(int row=0; row<9; row++){
      printf("%d ", sudoku[col][row]);
    }
    cout << endl;
  }
}

int testNum(int col, int row, int num){
  int colL;
  int rowL;
  if(col < 3) colL=0;
  else if(col < 6) colL=3;
  else colL =6;

  if(row < 3) rowL=0;
  else if(row < 6) rowL=3;
  else rowL =6;
  
  for(int i=0; i<9; i++){
    if(sudoku[col][i] == num || sudoku[i][row] == num) return 0;
  }
  for(int c=colL; c<colL+3; c++){
    for(int l=rowL; l<rowL+3; l++){
      if(sudoku[c][l] == num) return 0;
    }
  }
  return 1;
}

void fillSudoku(int cnt){
  if(testSudoku()){
    printSudoku();
    return;
  }
  for(int col=0; col<9; col++){
    for(int row=0; row<9; row++){
      if(sudoku[col][row] != 0) continue;
      for(int i=1; i<=9; i++){
        if(testNum(col,row,i)){
          sudoku[col][row] = i;
          fillSudoku(cnt+1);
          
          cout << endl;
          printSudoku();
          cout << endl;
        }
      }
    }
  }
}

int main() {
  for(int col=0; col<9; col++){
    for(int row=0; row<9; row++){
      scanf("%d", &sudoku[col][row]);
      if(sudoku[col][row] == 0) {
        numZero++;
      }
    }
  }
  
  fillSudoku(0);
  return 0;
}
