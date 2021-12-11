#include <iostream>
#include <vector>

using namespace std;

/*
  BaekJoon_2231 분해합
  m의 분해합이 n인 경우
  m을 n의 생성자라 함.

  어떤 자연수의 경우에는 생성자가 없을 수도 있다. 
   => 이 수를 분해합으로 하는 숫자가 없음
  반대로, 생성자가 여러 개인 자연수도 있을 수 있다.
   => 분해합이 이 수가 나오는 숫자가 여러개
*/

int decompose(int num){
  int result = num;
  while(1){
    result += num%10;
    if(num < 10) break;
    else num /= 10;
  }
  return result;
}

int main() {
  int* decArr = new int [1000001];
  int numM;
  for(int i = 0; i<= 1000000; i++){
    numM = decompose(i);
    if(decArr[numM] == 0){ decArr[numM] = i;}
  }

  int numN;
  cin >> numN;
  cout <<  decArr[numN] << endl;
  delete[] decArr;
}  