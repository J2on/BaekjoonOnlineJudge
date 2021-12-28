#include <iostream>
using namespace std;

int main() {
  int numN;
  cin >> numN;
  int* numArr = new int[numN];
  for(int i=0; i<numN; i++){
    scanf(" %d", &numArr[i]);
  }

  bool isDone; // 반복문을 돌며 정렬할것이 없을때를 판별하기 위함
  int temp;
  while(1){
    isDone = true;
    for(int i=0; i<numN-1; i++){
      if(numArr[i] > numArr[i+1]){
        temp = numArr[i+1];
        numArr[i+1] =  numArr[i];
        numArr[i] = temp;
        isDone = false;
      }
    }
    if(isDone == true){break;}
  }

  for(int i=0; i<numN; i++){
    printf("%d\n", numArr[i]);
  }
  delete[] numArr;
}
