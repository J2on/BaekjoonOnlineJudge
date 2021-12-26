#include<iostream>
#include<string>
using namespace std;

bool isIn666(const int &num){
  // num 숫자안에 666의 존재유무를 num을 문자열로 변경하여 판별하는 함수
  string numSt = to_string(num); 
  if(numSt.find("666") != string::npos) {return true;}
  else {return false;}
}

int main() {
  int numN;
  scanf("%d", &numN);

  // idea
  // num은 665부터 시작해서 1씩 올라간다.
  // num이 666을 포함한경우에 while문이 종료되어 i가 올라간다.
  // 결국 i번째 제목 == num으로 볼수있음
  int num=665;
  for(int i=1; i<=numN; i++){
    while(1){
      if(isIn666(num) == true){
        num++; // ++를 안해주면 다음번에 걸리기 때문에 ++
        break;
      }
      else {num++;}
    }
  }
  printf("%d",num-1); // 24번째 줄에서 num++를 해주었기때문에 -1해줌
}