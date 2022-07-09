#include<stdio.h>

/* 
  BaekJoon_2525 : 오븐 시계
  60분 = 1시간
  24시 = 0시 
*/

int main(){
  int time[2];

  int cookingTime[2];
  cookingTime[0] = 0;
  scanf("%d %d %d", &time[0], &time[1], &cookingTime[1]);

  time[0] += cookingTime[0];
  time[1] += cookingTime[1];

  // 1시간 = 60분으로 치환
  while(time[1] >= 60){
    time[0]++;
    time[1] -= 60;
  }
  // 24시간일 시 0으로 변환
  time[0] %= 24;
  printf("%d %d", time[0], time[1]);
}