#include<iostream>
using namespace std;

int main() {
  int numN;
  scanf("%d", &numN);
  int arrC[10000] = {0,};

  int numC;
  for(int i=0; i<numN; i++){
    scanf("%d", &numC);
    arrC[numC]++; // 인풋의 개수들 세기
  }

  cout << "------------------------------" << endl;
  for(int i=0; i<10; i++){cout << arrC[i] << endl;}
  cout << "counting 과정 완료" << endl;

  int numI = 0;
  for(int& i:arrC){
    if(i != 0){
      if(numI == 0){numI = i;}
      else{
        i += numI;
        numI = i;
      }  
    }
  }
  cout << "------------------------------" << endl;
  for(int i=0; i<10; i++){cout << arrC[i] << endl;}
  // 각 숫자들이 어디까지 위치해있는지
}