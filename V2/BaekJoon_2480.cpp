#include<stdio.h>

/* 
  BaekJoon_2480 : 주사위 세개
  input = 숫자 3개(주사위 눈)
  1. 같은 눈 3개 10000 + (같은눈 * 1000)
  2. 같은 눈 2개 1000 + (같은눈 * 100)
  3. 모두 다른 눈 (가장큰 눈 * 100)
*/

int main(){
  int diceNum[3];
  scanf("%d %d %d", &diceNum[0], &diceNum[1], &diceNum[2]);
  if(diceNum[0] == diceNum[1] && diceNum[1] == diceNum[2]){
    printf("%d", 10000 + (diceNum[0] * 1000));
  }
  else if(diceNum[0] == diceNum[1] || diceNum[0] == diceNum[2]){
    printf("%d", 1000 + (diceNum[0] * 100));
  }
  else if(diceNum[1] == diceNum[2]){
    printf("%d", 1000 + (diceNum[1] * 100));
  }
  else{
    // max 변수에 가장 큰 눈 숫자를 넣기
    int max = 0;
    for (int num:diceNum){
      if(num > max){
        max = num;
      }
    }
    printf("%d", max * 100);
  }
  return 0;
}