#include<iostream>
#include<vector>
using namespace std;

/* 
 BaekJoon_2580 : 스도쿠

*/
int locZero[64][2]; // 현재까지 최대 빈칸이 17개
int sudoku[8][8];
/*
bool testLocation(int numQ){
  for(int i=0; i<numQ; i++){
    if(arrQueen[i] == arrQueen[numQ] || numQ - i == abs(arrQueen[numQ] - arrQueen[i])){
      return false;
    }
  }
  return true;
}

void chess(int numQ){
  if(numQ == numN){
    result++;
    return;
  }

  for(int x=0; x<numN; x++){
    arrQueen[numQ] = x;
    if(testLocation(numQ)){
      chess(numQ+1);  
    }
  }
}
*/
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

void fillSudoku(int cnt){
  if(testSudoku()){
    printSudoku();
    return;
  }
  for(int col=0; col<9; col++){
    for(int row=0; row<9; row++){
      for()
    }
  }
}

int main() {
  for(int col=0; col<9; col++){
    for(int row=0; row<9; row++){
      scanf("%d", &sudoku[col][row]);
      if(sudoku[col][row] == 0) locZero
    }
  }
  cout << endl;
  
}