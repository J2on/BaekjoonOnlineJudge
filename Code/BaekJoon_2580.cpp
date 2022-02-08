#include<iostream>
using namespace std;

/* 
 BaekJoon_2580 : 스도쿠
*/

int sudoku[81];
int numZero = 0;

int testSudoku(){ // sudoku에 빈칸이 남아있는지 확인하는 함수
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

int testNum(int cnt, int num){ //cnt번째 자리에 num이란 숫자가 적합한지 판단하는 함수
  int col, row;
  int colL, rowL; // cnt 자리가 속하는 3x3 박스의 첫번째 col과 row값
   
  col = cnt/9; // col은 cnt의 9로 나눈 몫 ex) cnt = 54에서 col은 6 
  row = cnt%9; // row는 cnt의 9로 나눈 나머지 ex) cnt = 54에서 row는 0
 
  //colL과 rowL (해당하는 3x3의 첫번째 자리) 
  if(col < 3) colL=0;
  else if(col < 6) colL=3;
  else colL =6;
  if(row < 3) rowL=0;
  else if(row < 6) rowL=3;
  else rowL =6;
  
  // cnt자리의 가로와 세로에 같은 숫자가 있는지 확인
  for(int i=0; i<9; i++){
    if(sudoku[col*9 + i] == num || sudoku[i*9 + row] == num) return 0;
  }
  // 3x3 박스에 같은 숫자가 있는지 확인
  for(int c=colL; c<colL+3; c++){
    for(int l=rowL; l<rowL+3; l++){
      if(sudoku[c*9 + l] == num) return 0;
    }
  }
  // 문제가 없을 경우 1을 
  return 1;
}

void fillSudoku(int cnt){
  if(cnt == 81){ // cnt가 81에 도달한 경우 종료
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
		      if(testSudoku()) return; // 미종료된 함수들을 종료시키는 역할
      }
      sudoku[cnt] = 0; // 1~9에서 cnt번째 자리에 적합한 수를 찾지 못한 경우 해당 자리를 다시 0으로 만들고 이전 cnt-1번째 함수로 돌아감
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
