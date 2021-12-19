#include <iostream>
#include <algorithm>
using namespace std;

/*
  BaekJoon_1018 체스판 다시 칠하기
  특정구간을 정해서 그 구간속에 B와W의 개수차가 가장 적은 걸 선택
  개수차가 답
*/

int main() {
  int numN, numM;
  scanf("%d %d", &numN, &numM);
  char board[numN][numM];
  for(int i=0; i<numN; i++){
    for(int k=0; k<numM; k++){
      scanf(" %c", &board[i][k]);
    }
  }

  int col = 0, row= 0;
  int count;
  int result=2500;

  char backUp[numN][numM];
  copy(&board[0][0],&board[0][0]+numN*numM,&backUp[0][0]);
  while(1){
    count=0;
    for(int c = col; c < col+8; c++){
      for(int r = row; r < row+8; r++){
        if(c == col){
          if(r == row){continue;}
          if(board[c][r-1] != board[c][r]){continue;}
          else if(board[c][r-1] == 'B'){
            board[c][r] = 'W';
            cout << "c: "<< c << " r: " << r << endl;
            count++;  
          }
          else {
            board[c][r] = 'B';
            cout << "c: "<< c << " r: " << r << endl;
            count++;
          }
        }
        else{
         if(board[c-1][r] != board[c][r]){continue;}
         else if(board[c-1][r] == 'B'){
            board[c][r] = 'W';
            cout << "c: "<< c << " r: " << r << endl;
            count++;  
          }
          else {
            board[c][r] = 'B';
            cout << "c: "<< c << " r: " << r << endl;
            count++;
          }
        }
      }
    }
    if(count < result){
      result = count;
    }
    copy(&backUp[0][0],&backUp[0][0]+numN*numM,&board[0][0]);
    if(col+8 == numN && row+8 == numM){break;}
    else if(row+8 == numM){
      col++;
      row = 0;
    }
    else{row++;}
  }
  cout << result;
}
