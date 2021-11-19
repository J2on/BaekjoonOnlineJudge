#include <iostream>
#include <vector>
using namespace std;

/* 
  입력받은 수 N
  N/2 까지의 모든 소수를 구해
  구하고 다 벡터에 집어넣고
  {P1, P2, P3, P4, P5, ...}
  N/2 - Pn이 소수인지 확인해보면
  되는거 아님?
*/


bool isPrime(int num){
  if (num == 1){return false;}
  
  for(int i =2; i*i <= num; i++){
    if(num%i == 0){return false;}
  }
  
  return true;
}

int findGBP(int num){
  vector<int> priVec;
  for(int i=2; i<= num/2; i++){
    if(isPrime(i) == true){
      priVec.push_back(i);
    }
  }

  int small=0;
  for(int numP:priVec){
    if(isPrime(num-numP) == true && small < numP){
      small = numP;
    }
  } // 골드바흐 파티션 두 숫자중 작은 숫자를 구하는 과정

  return small;
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