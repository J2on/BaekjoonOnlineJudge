#include <iostream>
using namespace std;

int d(int Num){
  int DResult=Num;
  int Try = 1;
  while(Num != 0) {
    DResult += Num%10;
    Num = Num/(10*Try);
  }
  return DResult;
  /// 문제에 나오는 함수 구현
}

int main() {
  int NumArray[10000] ={0,};

  for(int Num=0; Num<10000; ++Num){
    int Result = d(Num);
    if (Result < 10000){
      NumArray[Result] = 1;
    }
  }
  /// 셀프 넘버가 아닌 숫자가 index인 array에 1을 넣음

  for (int Num =0; Num <10000; ++Num){
    if (NumArray[Num] != 1){
      cout << Num << "\n";
   }
  }
  /// 1이 아닌 index를 모두 출력
  
}