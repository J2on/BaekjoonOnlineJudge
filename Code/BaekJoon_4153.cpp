#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/* 
  BaekJoon-4153 "네 번째 점"
  이건 너무 쉬운것 같다
  그냥 입력받은 수 들이 피타고라스 정리에 맞는지 확인하면 끝
  
*/

int main() {
  vector<int> numArr = {0,0,0};
  while(1){
    cin >> numArr[0]>> numArr[1] >> numArr[2];
    sort(numArr.begin(), numArr.end());
    if(numArr[0] == 0){break;}
    else if(numArr[2]*numArr[2] == numArr[0]*numArr[0] + numArr[1]*numArr[1]){
      cout << "right" << endl;
    }
    else {
      cout << "wrong" << endl;
    }
  }
}