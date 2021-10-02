#include <iostream>
#include <cmath>
using namespace std;

int dayOfSnail(const int& numA,const int& numB,const int& numV){
  //도달하지 못했을때 하루의 이동값
  double oneDay = numA - numB;
  // oneDay 변수를 기준으로 생각한 결과값
  int result = ceil(double(numV) / oneDay);
  // 정상에 도달했다가 미끄러지는 경우를 생각한 코드
  for (int i = result - numA; i < result; i++){
    if (oneDay * (i-1) + numA >= numV){
      return i;
    }
  }

  return result;
}


int main() {
  int numA;
  int numB;
  int numV;
  cin >> numA >> numB >> numV;
  cout << dayOfSnail(numA, numB, numV) << "\n";
}