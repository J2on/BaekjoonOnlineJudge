#include <iostream>
#include <cmath>
using namespace std;

/*
  BaekJoon_1002
  1) 2인경우
   두 원이 서로 살짝 겹쳐 있는 경우
   -1 한 원이 훨씬 큰 경우 d +r2 > r1 => d > r1 -r2
   -2 두 원 크기가 비슷한 경우 r3 < r1 + r2
    두 가지 합치면 r1 + r2 > d > r1 -r2
  2) 1인 경우
   -1 내접하는 경우 r1 = r2 + d => d = r1 - r2
   -2 외접하는 경우 d = r1 + r2
  3) 0인 경우 * 두 원이 안만남
   -1 한 원이 훨씬 큰 경우 d + r2 < r1 => d < r1 - r2
   -2 그냥 서로 멀리 떨어져 있는 경우 d > r1 + r2
    두 가지 합치면 r1-r2 > d > r1 +r2
  4) -1인 경우
   x,y좌표가 같고 거리까지 같은 경우
*/

int findRyu(int numX1, int numY1, int numR1, int numX2, int numY2, int numR2){
  long long numD = pow(numX1 - numX2,2) + pow(numY1 - numY2,2); // 조규현과 류재명의 거리
  long long addR1R2 = pow(numR1 + numR2, 2);
  long long subR1R2 = pow(numR1 - numR2, 2);
  if(addR1R2 > numD && numD > subR1R2){ return 2; }
  else if(numD == addR1R2 || (numD == subR1R2 && numD != 0)) { return 1; }
  else if(subR1R2 > numD && numD > addR1R2){ return 0; }
  else if(numX1 == numX2 && numY1 == numY2){
    if (subR1R2 == 0){
      return -1;
    }
    else {
      return 0;
    }
  }
  return 0;
}

int main() {
  int tCase;
  cin >> tCase;
  int numX1, numY1, numR1, numX2, numY2, numR2;
  for(int i=0; i<tCase; i++){
    cin >> numX1 >> numY1 >> numR1 >> numX2 >> numY2 >> numR2; 
    cout << findRyu(numX1, numY1, numR1, numX2, numY2, numR2) << "\n";
  }
}  