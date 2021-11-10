#include <iostream>
using namespace std;

/*
x -> y로 이동
첫 번째 이동은 항상 +1
마지막 이동도 항상 +1

이동은 항상 전 회차 이동의 -1,+0,+1 만큼 이동 할 수 있음

x -> y의 최소 이동횟수를 구하라

가장 큰 이동값을 k

x와 y의 차이 값보다 작으면서 가장 가까운 제곱수를 z라고 할때
k는 z의 제곱근

z+1 ~ z+k 는 답이 k*2
z+k+1 ~ (k+1)^2 은 답이 k*2 +1
*/

int findNumK(long long numX, long long numY, long long gap) {
  long long numK = 1;
  while(1){
    if (numK*numK >= gap){
      break;
    }
    else {
      numK++;
    }
  }
  return numK-1;
}


int numTeleport(long long numX, long long numY){
  long long gap = numY - numX;
  long long numK = findNumK(numX, numY, gap);
  long long numZ = numK*numK;
  if(numZ+1 <= gap && gap <= numZ+numK){
    return numK*2;
  }
  else{
    return numK*2 +1;
  }
  
}

int main() {
  int testCase;
  cin >> testCase;
  
  long long numX;
  long long numY;
  for (int i =0; i < testCase; i++){
    cin >> numX >> numY;
    cout << numTeleport(numX, numY) << "\n";
  }
}

