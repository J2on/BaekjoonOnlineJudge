#include <iostream>
using namespace std;

/*
  BaekJoon_2447 별찍기 10
  
  (1,1) (4,1) (7,1) (10,1) ...
  여긴 3으로 나누었을 때 나머지가 1인 지점 1개

  (3,3) ~ (5,3) (12,3) ~ (14,3) (21,3) ~ (23,3)
  (3,5) ~ (5,5) (12,5) ~ (14,5) (21,5) ~ (23,5)
  여긴 9로 나누었을 때 나머지가 3인 지점부터 3개
  
  (9,9) ~ (17,9) (36,9) 이런식으로 갈듯
  여긴 27로 나누었을 때 나머지가 9인 지점부터 9개

  결국 N으로 나누었을 때 나머지가 N/3인 지점부터 N/3개를 “ ”으로 출력한다.
*/

char isStar(int N, int X, int Y){

  
  //cout << temp << X << ' ' << Y;
  
  int temp;
  int oriX = X;
  int oriY = Y;
  while(1){
    X = oriX;
    Y = oriY; //가공했던 x,y값을 원래 값으로 돌림

     // (4,3) 이런경우 (3,3) 으로 생각하여 판단할 수 있게 만든 코드
    if(N>3){
      temp = Y % (N/3);
    Y -= temp;
    int temp = X % (N/3);
    X -= temp;
    }

    if(X%N == N/3 && Y%N == N/3) {
      return ' ';
    }
    else {
      N /= 3;
    }

    if(N == 1) break;
  }
  return '*';
}

int main() {
  int N;
  cin >> N;
  
  int X = 0;
  int Y = 0;
  while(1){
    cout << isStar(N,X,Y);
    
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