#include <iostream>
using namespace std;

/*
x -> y로 이동
첫 번째 이동은 항상 +1
마지막 이동도 항상 +1

이동은 항상 전 회차 이동의 -1,+0,+1 만큼 이동 할 수 있음

x -> y의 최소 이동횟수를 구하라

if x =3 y=7이면 3->7 
3 +1 =4 +2 =6 +1 =7
2 12
2 +1 =3 +2 =5 +3 =8 +2 =10 +1 = 11 +1 =12
3  21
3 +1 =4 +2=6 +3=9 +4=13 +3=16 +2=18 +2=20 +1=21
결국 y-1이 되었을때의 k값은 항상 1 or 2여야 한다는 거 
k값을 언제까지 증가시키느냐가 중요할것 같은데
1에서 k값까지 합이 남은 거리보다 작거나 같을때만 더해야 하나

이게 맞는듯
45 +1=46+2=48+1=49+50
*/
int sumZeroToNumK(int numK){
  int result=0;
  for (int i=1; i<=numK; i++){
    result += i;
  }
  return result;
}

int numTeleport(int numX, int numY){
  int numK = 1;
  int sum = numX+1;
  int numMove = 2; // 짜피 첫번이랑 막번은 +1이므로 걍 2로 박음
  while(1){
    if(sumZeroToNumK(numK+1) <= numY-sum){
      numK++;
    }
    else if (sumZeroToNumK(numK) <= numY-sum){}
    else {
      numK--;
    }

    numMove++;
    sum += numK;
    if(sum == numY-1){break;}
  }

  return numMove;
}

int main() {
  int testCase;
  cin >> testCase;
  
  int numX;
  int numY;
  for (int i =0; i < testCase; i++){
    cin >> numX >> numY;
    cout << numTeleport(numX, numY) << "/n";
  }
}

