#include <iostream>
using namespace std;

/* 
  BaekJoon-1085 "직사각형에서 탈출"

  numX, numY, numW, numH를 입력받는데
  그냥 numW-numX랑 numH-numY, numX, numY 중에 작은거 아닐까
*/



int main() {
  int numX;
  int numY;
  int numW;
  int numH;
  cin >> numX >> numY >> numW >> numH;

  int min = numX;
  if(numY < min){min = numY;}
  if(numW-numX < min){min = numW-numX;}
  if(numH-numY < min){min = numH-numY;}
  cout << min;
}