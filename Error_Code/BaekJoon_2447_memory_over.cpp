#include <iostream>
#include <vector>
using namespace std;

/*
  BaekJoon_10870 피보나치 수 5
  입력받은 수 N
  일단 N X N 메트릭스에 *을 다 채운다
  그리고 공백이 들어가야 할 부분을 채워준다.

  먼저 정 가운데에 공백을 채운다.
  -> 공백을 감싸고 있는 N/3 X N/3 메트릭스의 가운데 공백을 채운다.
   이걸 반복 한다
*/


int main() {
  int numN;
  cin >> numN;
  vector<vector<char>> matrix;
  vector<char> row;
  for(int i=0; i<numN; i++){
    for(int k=0; k<numN; k++){
      row.push_back('*');
    }
    matrix.push_back(row);
  }

  int numX, numY;
  int temp = numN;

  while(1){
    numX = temp/3;
    numY = temp/3;

    while(1){

      if(numY > numN){
        break;
      }

      for(int i=numY; i< numY + temp/3; i++){
        for(int k=numX; k< numX + temp/3; k++){
          matrix[i][k] = ' ';
        }
      }

      numX += temp;
      
      if(numX > numN){
        numX = temp/3;
        numY += temp;
      }
    }
    temp /= 3;
    
    if(temp == 1) break;
  }

// 프린트
  for(int i=0; i<numN; i++){
    for(int k=0; k<numN; k++){
      cout << matrix[i][k] << ' ';
    }
    cout << endl;
  }
  cout <<endl;
}  