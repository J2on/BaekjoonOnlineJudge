#include <iostream>
using namespace std;

/*
  BaekJoon_10872 팩토리얼
  
*/


int main() {
  int numN;
  cin >> numN;
  int result = 1;
  while(numN){
    result *= numN;
    numN--;
  }
  cout << result;
}  