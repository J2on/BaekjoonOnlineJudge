#include<stdio.h>

/*
  BaekJoon_10815 숫자 카드
  상근 숫자 n개 가짐, 정수 m개 가짐
  -10,000,000 ~ 10,000,000 범위를 나타내는
  20,000,001개 크기의 배열에 상근이가 가진 숫자에 해당하는 배열위치에 1, 아닌 숫자는 0을 저장
  추후 입력받은 숫자에 해당하는 위치가 1이면 1을 출력, 아니면 0을 출력
*/

int main(){

  // -10000000 ~ 10000000로 생각
  int* arrSG = new int[20000001]();
  
  int numN;
  scanf("%d", &numN);
  int tempNum;
  for(int i=0; i<numN; i++){
    scanf("%d", &tempNum);
    tempNum += 10000000;
    arrSG[tempNum] = 1;
  }

  int numM;
  scanf("%d", &numM);
  for(int i=0; i<numM; i++){
    scanf("%d", &tempNum);
    tempNum += 10000000;
    if(arrSG[tempNum] == 1){
      printf("%d ", 1);
    }
    else{
      printf("%d ", 0);
    }
  }

  delete[] arrSG;
}
