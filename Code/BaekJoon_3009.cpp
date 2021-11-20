#include <iostream>
using namespace std;

/* 
  BaekJoon-3009 "네 번째 점"

  이건 그냥 입력받은 x좌표 y좌표 중에 짝이 없는 애가 답이네
*/

int main() {
  int numX;
  int numY;
  int arrX[3];
  int arrY[3];
  
  for(int i=0; i<3; i++){
    cin >> numX >> numY;
    arrX[i] = numX;
    arrY[i] = numY;
  }

  int count;
  for(int i=0; i<3; i++){
    count = 0;
    for(int k=0; k<3; k++){ 
      if(arrX[i] == arrX[k]){count++;}
    }

    if(count == 1){
      cout << arrX[i] << " ";
    }
  }

  for(int i=0; i<3; i++){
    count = 0;
    for(int k=0; k<3; k++){ 
      if(arrY[i] == arrY[k]){count++;}
    }

    if(count == 1){
      cout << arrY[i] << " ";
    }
  }
}