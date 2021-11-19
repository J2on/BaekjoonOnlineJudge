#include <iostream>
using namespace std;

/* 
  입력받은 수 N
  N/2 까지의 모든 소수를 구해
  구하고 다 벡터에 집어넣고
  {P1, P2, P3, P4, P5, ...}
  N/2 - Pn이 소수인지 확인해보면
  되는거 아님?

  버전 1이랑 다른 점은 findGBP 함수에서 반복문의 실행순서를 반대로 했음
  어짜피 n/2과 가장 가까운 값을 찾아야 한다면 굳이 작은곳에서 부터 올라올 필요가 없지
*/


bool isPrime(int num){
  if (num == 1){return false;}
  
  for(int i =2; i*i <= num; i++){
    if(num%i == 0){return false;}
  }
  
  return true;
}

int findGBP(int num){
  for(int i=num/2; i >= 2; i--){
    if(isPrime(i) == true && isPrime(num-i) == true){
      return i;
    }
  }
  return 1;
}

int main() {
  int testCase;
  cin >> testCase;
  int numN;
  for(int i=0; i<testCase; i++){
    cin >> numN;
    int result =  findGBP(numN);
    cout << result << " " << numN - result << "\n";
  }
}