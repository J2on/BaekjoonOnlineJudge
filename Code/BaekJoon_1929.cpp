#include <iostream>
using namespace std;

bool isPrime(int num){ // 소수인지 판별해주는 함수
  if(num == 1) return false;
  
  for(int i=2; i*i <= num; i++){
    if(num % i == 0) return false;
  }
  return true;
}

int main() {
  int numM;
  int numN;
  cin >> numM >> numN;

  for (int i=numM; i<= numN; i++){
    if(isPrime(i) == true){
      cout << i << "\n";
    }
  }
}