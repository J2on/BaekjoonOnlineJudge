#include <iostream>
using namespace std;

bool findPrimeNum(const int& num) {
  bool result = true;
  if (num == 1) {
    result = false;
  }

  for (int i=2; i < num; i++){ // num이 2일때 i=2 num=2인 상황에서 i<num을 충족하지 않아서 2일때도 true로 반환
    if(num%i == 0){
      result = false;
    }
  }

  return result;
}

int main() {
  int numM;
  int numN;
  cin >> numM >> numN;

  int sum = 0;
  int min = numN;
  for(int i=numM; i <=numN; i++){
    if (findPrimeNum(i) == true){
      sum += i;
      if (i < min){min = i;}
    }
  }

  if (sum != 0 ){
    cout << sum << "\n";
    cout << min << "\n";
  }
  else {
    cout << -1 << "\n";
  }
}