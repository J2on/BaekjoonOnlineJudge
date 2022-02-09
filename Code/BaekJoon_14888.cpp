#include<iostream>
using namespace std;

/* 
 BaekJoon_14888 : 연산자 끼워넣기

*/
int numN;
int* numArr = new int[numN];
int op[4];
int max, min;

int main() {
  scanf("%d", &numN);
  for(int i=0; i<numN; i++){
    scanf("%d", &numArr[i]);
  }
  for(int i=0; i<4; i++){
    scanf("%d", &op[i]);
  }

  
  delete[] numArr;
}
