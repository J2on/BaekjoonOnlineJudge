#include <iostream>
using namespace std;

/*
  BaekJoon_10870 피보나치 수 5
  
*/


int main() {
  int N;
  cin >> N;
  
  int X = 0;
  int Y = 0;
  while(1){
    if(X%3 == 1 && Y%3 == 1){
      cout << ' ';
    }
    else {
      cout << '*';
    }
    
    if(X == N-1){
      if(Y == N-1) {break;}
      else {
        X = 0;
        Y++;
        cout << "\n";
      }
    }
    else{
      X++;
    }
    
  }

}  