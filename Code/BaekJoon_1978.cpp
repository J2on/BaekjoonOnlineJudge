#include <iostream>
using namespace std;

/*
  소수를 찾아내는 방법은 어떤게 있을까
  2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 57 59 61 67
  1000
  10 100
  2 5 10 10
  2 5 2 5 2 5
*/
bool findPrimeNum(const int& num) {
  bool result = true;
  if (num == 1) {
    result = false;
  }
  else if (num == 2){
    result = true;
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
  
  int num;
  int countPN = 0;
  for(int i=0; i < numN; i++) {
    cin >> num;
    if (findPrimeNum(num) == true){
      countPN++;
    }
  }
  cout << countPN << "\n";
}
