#include <iostream>
#include <cmath>
using namespace std;

/*
  BaekJoon_1002
  1)
  조규현과 류재명의 거리 + 백승환과 류재명의 거리 < 조규현과 류재명의 거리
  인 경우 는 0개
   * 조규현과 류재명의 위치가 같을때도 0개
  2)
  조규현과 류재명의 거리 + 백승환과 류재명의 거리 = 조규현과 류재명의 거리 인 경우(조규현과 백승환의 일직선상에 류재명이 위치해야 한다)
  => 1개
  3)
  조규현과 류재명의 거리 + 백승환과 류재명의 거리 > 조규현과 류재명의 거리
  인데
    3-1) 
    조규현과 류재명의 거리 and  백승환과 류재명의 거리 < 조규현과 백승환의 거리
    이 경우는 조규현과 백승환의 일직선을 기준으로 위에 하나 아래에 하나
    3-2)
    조규현과 류재명의 거리 or  백승환과 류재명의 거리 > 조규현과 백승환의 거리
    이 경우는 무한대

*/

int findRyu(int numX1, int numY1, int numR1, int numX2, int numY2, int numR2){
  double numR3 = sqrt(pow(numX1 - numX2,2) + pow(numY1 - numY2,2)); // 조규현과 류재명의 거리
  if(numX1 == numX2 && numY1 == numY2){
    if(numR1 == numR2){
      return -1;
    }
    else { return 0; }
  }
  else if(numR1 > numR3 || numR2 > numR3){
    if(numR1 + numR3 < numR2 || numR2 + numR3 < numR1){
      return 0;
    }
    else if(numR1 + numR3 == numR2 || numR2 + numR3 == numR1){
      return 1;
    }
    else { return 2; }
  }
  else if(numR1 + numR2 == numR3){
    return 1;
  }
  else{ // Case : numR1 < numR3 && numR2 < numR3
      if (numR1 + numR2 < numR3){ return 0; }
      else { return 2; }
  }
}

int main() {
  int tCase;
  cin >> tCase;
  double numX1, numY1, numR1, numX2, numY2, numR2;
  for(int i=0; i<tCase; i++){
    cin >> numX1 >> numY1 >> numR1 >> numX2 >> numY2 >> numR2; 
    cout << findRyu(numX1, numY1, numR1, numX2, numY2, numR2);
  }
}  