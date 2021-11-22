#include <iostream>
using namespace std;

/*
  BaekJoon_3053
  유클리드 기하학과 택시 기하학의 원의 모양이 참 많이 다르다
  택시 기하학의 원은 마름모 모양을 가진다.
  그래서 택시 기하학에서는 대각선의 길이가 2R인 마름모의 넓이를 구하자
*/

int main() {
  double numR;
  cin >> numR;

  cout << fixed;
  cout.precision(6);
  cout << numR*numR * 3.14159265359 << "\n";
  cout << 4 * numR * numR / 2 << "\n"; 
}  