#include<iostream>
using namespace std;

/*
  BaekJoon_10815 숫자 카드
  상근 숫자 n개 가짐, 정수 m개 가짐
*/

int main(){
  int numN;
  scanf("%d", &numN);
  int* arrN = new int[numN];
  for(int i=0; i<numN; i++){
    scanf("%d", &arrN[i]);
  }
  
  int numM;
  scanf("%d", &numM);
  int* arrM = new int[numM];
  for(int i=0; i<numM; i++){
    scanf("%d", &arrM[i]);
  }
  
  bool isTrue;
  for(int m=0; m<numM; m++){
    isTrue = false;
    for(int n=0; n<numN; n++){
      if(arrN[n] == arrM[m]){
        isTrue = true;
      }
    }
    if(isTrue == true){printf("%d ", 1);}
    else{printf("%d ", 0);}
  }
  delete[] arrN;
  delete[] arrM;
}
