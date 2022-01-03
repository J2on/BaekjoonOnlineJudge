#include<iostream>
using namespace std;

/*
  BaekJoon_2108 통계학
산술평균 : N개의 수들의 합을 N으로 나눈 값
중앙값 : N개의 수들을 증가하는 순서로 나열했을 경우 그 중앙에 위치하는 값
최빈값 : N개의 수들 중 가장 많이 나타나는 값
범위 : N개의 수들 중 최댓값과 최솟값의 차이

 각각의 경우를 함수로 나누려다보니 코드가 길어졌다.
*/

double findAverage(int arrN[], int numN){
  double sum=0;
  for(int i=0; i<numN; i++){
    sum += arrN[i];
  }
  return sum/(double)numN;
}

int findCentor(int arrN[], int numN){
  return arrN[numN/2];
}

int findMode(int arrC[]){
  int max = 0;
  int count = 0;
  int result;
   // 전체를 돌며 최빈값이 하나인지 확인
  for(int i=0; i<8001; i++){
    if(arrC[i] > max){
      max = arrC[i];
      result = i-4000;
      count = 0;
    }
    else if(arrC[i] == max){
      count++;
    }
  } 
   // 하나인 경우에는 바로 출력하고 아닌 경우는 count가 2가되는 경우로 결과값을 설정
  if(count == 0){return result;}
  else {
    count = 0;
    for(int i=0; i<8001; i++){
      if(arrC[i] == max){
      count++;
      }

      if(count == 2){
        result = i-4000;
        break;
      }
    }
    return result;
  }
}

int findRange(int arrN[], int numN){
  int min = arrN[0];
  int max = arrN[numN-1];
  return abs(max-min);
}

int main() {
  int numN;
  scanf("%d", &numN);
  int arrC[8001] = {0,};

  // 계수정렬을 사용
  // 0~8000으로 -4000~4000을 표현하기 위해
  // 0을 arrC에서 4000으로 생각
  int numC;
  for(int i=0; i<numN; i++){
    scanf("%d", &numC);
    arrC[numC+4000]++; // 인풋의 개수들 세기
  }

  int arrN[numN];
  int index = 0;
  for(int k=0; k<8001; k++){
    if(arrC[k] != 0){
      for(int j=0; j < arrC[k]; j++){
        arrN[index] = k-4000;
        index++;
      }
    }
  }

  // 출력
  printf("%.0f \n", findAverage(arrN, numN));
  printf("%d \n", findCentor(arrN, numN));
  printf("%d \n", findMode(arrC));
  printf("%d \n", findRange(arrN, numN));
}