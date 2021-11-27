#include <iostream>
using namespace std;

/*
  BaekJoon_10870 피보나치 수 5
  
*/


int main() {
  int numN;
  cin >> numN;
  int fiboArr[20] = {0,1,};
  int index = 2;
  while(1){
    fiboArr[index] = fiboArr[index-1] + fiboArr[index-2];
    index++;
    if(index == 21){ break; }
  }
  cout << fiboArr[numN] << endl;
}  