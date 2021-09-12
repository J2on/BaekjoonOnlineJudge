#include <iostream>
using namespace std;

int main() {
  int testCase;
  cin >> testCase;
  
  int numR;

  for (int i =0; i < testCase; ++i){
    char chP[21] = {0,}; //초기화 시켜줌
    
    cin >> numR;
    cin >> chP;
 
    for(char ch:chP){
      if (ch != 0) {
        for(int j =0; j<numR; ++j){
          cout << ch;
        }
      }
    }
    cout << "\n";
  }
}