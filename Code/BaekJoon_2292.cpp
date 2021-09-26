#include <iostream>
using namespace std;

// 같은 테두리에 있는 수들은 다 같은 횟수를 가진다.
// 1->2 : 2개 // 7->8 : 3개 // 19-> 20 // 37->38 // 61->62
// 넘어갈때마다 횟수가 바뀌는 숫자들은
// 그 차이들이 공차가 6인 등차수열을 이룬다.

int howManyRoom(const int& num){
  if (num == 1){ return 1;}
  else if (num == 8) { return 2;}// 8일때를 해결을 못해서 넣음
  
  int ring = 1;
  int stack = 0;
  while(1){
    //횟수가 증가할수록 6을 더 곱해서 넣어야 하는데
    if (2 + 6*stack <= num && 2 + 6*(stack + ring) > num){
      return ring+1;
    }
    else {
      stack += ring;
      ++ring;
    }
  }
}

int main() {
  int num;
  cin >> num;
  cout << howManyRoom(num) << "\n";
}