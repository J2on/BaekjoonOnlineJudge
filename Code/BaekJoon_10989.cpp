#include<iostream>
using namespace std;

/*
  BaekJoon_10989 수 정렬하기3
  계수 정렬(counting sort)로 쉽게 해결할 수 있었다.
  개념은 각 숫자들이 입력된 수를 세어서
  어떤 수:몇번 으로 정리해서 그에 맞추어 다시 구성하는것이다.
  어렵진 않았다.
*/

int main() {
  int numN;
  scanf("%d", &numN);
  int arrC[10001] = {0,};

  int numC;
  for(int i=0; i<numN; i++){
    scanf("%d", &numC);
    arrC[numC]++; // 인풋의 개수들 세기
  }

  // 계수정렬의 설명처럼 2 4 6 9 이런식으로 배열하지 않고 그냥 개수들만큼 바로 출력시켰음
  for(int k=0; k<10001; k++){
    if(arrC[k] != 0){
      for(int j=0; j < arrC[k]; j++){
        printf("%d \n", k);
      }
    }
  }
}
