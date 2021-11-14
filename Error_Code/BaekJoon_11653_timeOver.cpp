#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;

bool findPrimeNum(const int& num) {
  bool result = true;
  if (num == 1) {
    result = false;
  }
  for (int i=2; i < num; i++){
    if(num%i == 0){
      result = false;
    }
  }
  return result;
}

int main() {
  

  int numN;
  cin >> numN;
  int numN_copy = numN;

  clock_t st, fn;
  st= clock(); // 시간측정

  vector<int> primeVec;
  bool isOk;
  for (int i = 2; i<=numN; ++i){
    isOk = true;
    for (int j=2; j < i; j++){
      if (i%j ==0){
        isOk =false;
        break;
      }
    } // numN까지의 소수들을 vector에 넣음
    if(isOk == true) {primeVec.push_back(i);}
  }

  vector<int> factorVec;
  bool isOver;
  while(1){
    isOver = false;
    for (int i:primeVec){
      if (i <= numN && numN%i==0){ // i가 numN의 인수라면
        numN /= i;
        factorVec.push_back(i);
        isOver = true;
        continue;
      }
    }
    if(isOver == false) {break;}
  }

  sort(factorVec.begin(), factorVec.end());
  if (numN != numN_copy){
    for (int i:factorVec){
      cout << i << "\n";
    }
  }
  
  fn = clock();
  cout << "걸린시간" << (double)(fn-st) << endl; // 시간측정
}