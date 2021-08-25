/*
#include <iostream>
using namespace std;

int main() {
  int NumArray[10];
  for(int i=0; i < 10; ++i) {
    cin >> NumArray[i];
    NumArray[i] %= 42;
  }
  int NumArray2[10] = {0,};
  for (int i = 0; i < 10; ++i) {
    for (int k = 0; k < 10; ++k) {
      if (NumArray[i] == NumArray[k]){
        NumArray2[i]++;
      }
    }
  }
  /// 각 배열의 수들이 몇개씩 써졌는지 확인
  float Count = 0;
  /// 써진 수를 총 num으로 나누어서 더해줌 ㅋㅋ
  for (float Num:NumArray2){
    Count += 1/Num;
  }
  cout << Count << "\n";

  return 0;
}
*/

