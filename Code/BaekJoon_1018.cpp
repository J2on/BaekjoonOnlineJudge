#include <iostream>
using namespace std;

/*
  BaekJoon_1018 체스판 다시 칠하기
  특정구간을 정해서 그 구간속에서 구하기
  x,y의 합이 홀수인 경우와 짝수인 경우의 색이 다른점을 활용
  0 1 2 3 4 5 6 7
0 B W B W B W B W
1 W B W B W B W B
2 B W B W B W B W
3 W B W B W B W B
4 B W B W B W B W
5 W B W B W B W B
6 B W B W B W B W
7 W B W B W B W B
  - 역시 패턴을 찾는게 중요하구나
*/

int main() {
  // 변수 입력
  int numN, numM;
  scanf("%d %d", &numN, &numM);
  char board[numN][numM];
  for(int i=0; i<numN; i++){
    for(int k=0; k<numM; k++){
      scanf(" %c", &board[i][k]);
    }
  }

  // 바로 밑 while문을 위한 변수설정
  // 8X8이상의 배열일 시 그 배열에서 좌상단부터 오른쪽으로 1씩 이동하며 8X8배열을 떼어와서 진행
  // x,y 좌표의 합이 짝수인 지점과 홀수인 지점의 색이 무조건 달라야 함
  // 그래서 짝수인지점들의 B/W 개수, 홀수인지점의 B/W 개수를 찾아서 최소 변경값을 찾기
  // col과 row는 그 배열들의 시작점 / count는 각 회차마다 색칠해야하는 횟수/ result는 그 중 최솟값을 저장
  int col = 0, row= 0;
  int count;
  int result=32; // 32는 가능한 최대의 색칠횟수라 32로 설정

  while(1){
    int bw1[2] = {0,};
    int bw2[2] = {0,}; // bw1은 짝수인 경우의 B/W 개수 bw2는 홀수인 경우

    for(int y = col; y < col+8; y++){
      for(int x = row; x < row+8; x++){
        int sum = x+y;
        if(sum%2 == 0){
          if(board[y][x] == 'B'){bw1[0]++;}
          else {bw1[1]++;}
        }
        else{
          if(board[y][x] == 'B'){bw2[0]++;}
          else {bw2[1]++;}
        }
      }
    }

    // 개수를 다 세었으면 홀수인 지점들과 짝수인 지점들에 색을 배정해 줘야하기 때문에 최소값을 찾는 과정
    if(bw1[0]+bw2[1] < bw1[1]+bw2[0]){
      count = bw1[0]+bw2[1];
    }
    else{
      count = bw1[1]+bw2[0];
    }
    if(count < result){
      result = count;
    }

    // 한 회차가 끝나면 다음 8x8 배열로 이동하는 부분
    if(col+8 == numN && row+8 == numM){break;}
    else if(row+8 == numM){
      col++;
      row = 0;
    }
    else{row++;}
  }
  cout << result;
}
