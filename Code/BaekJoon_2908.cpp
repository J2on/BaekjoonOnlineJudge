#include<iostream>
using namespace std;

// 정수를 입력받아 뒤집어 주는 함수
// 10으로 나눈 나머지 구하기 → NUM을 10으로 나누어 주기 를 반복하면 각 자릿수를 구할 수 있다.
int reverseInt(int num){
  int numList[3];

  for(int i=0; i<3; ++i){
    numList[i] = num%10;
    num /= 10;
  }
  int result = numList[0]*100 + numList[1]*10 + numList[2];
  return result;
}

// 굳이 함수를 따로 만들어야 했나 싶지만 이때 함수로 나누는 연습을 하고 있던 중이라...
// 그리고 개인적으로는 MAIN함수를 깔끔하게 가져가는것이 좋은것 같다.
// 비교해서 큰 수를 리턴하는 함수
int compareInt(int numA, int numB){
  if (numA > numB) {return numA;}
  else {return numB;}
}

int main() {
  int numA;
  int numB;

  cin >> numA >> numB;

  int revA = reverseInt(numA);
  int revB = reverseInt(numB);

  int result = compareInt(revA, revB);

  cout << result;
}
