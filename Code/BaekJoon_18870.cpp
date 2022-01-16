#include<iostream>
#include<vector>
using namespace std;

/*
  BaekJoon_18870 좌표압축
  도대체 이게 무슨 소리일까 했는데
  리스트 안에 들어있는 수들을 쫙 줄세워서
  가장 작은애 0 다음 1 다음 2 
  이런식으로 바꿔버리는거 
*/
void swapE(int &numA, int &numB){
  int numT = numA;
  numA = numB;
  numB = numT;
}

int main(){
  int numN;
  scanf("%d",&numN);
  
  vector<int> numVec;
  int numX;
  for(int i=0; i<numN; i++){
    cin>> numX;
    numVec.push_back(numX);
  }

  vector<int> copyVec;
  for(int i=0; i<numN; i++){
    copyVec.push_back(numVec[i]);
  }
  
  bool isDone;
  while(1){
    isDone = true;
    for(int i=0; i<numVec.size()-1; i++){
      if(numVec[i] > numVec[i+1]){
        swapE(numVec[i], numVec[i+1]);
        isDone = false;
      }
      else if(numVec[i] == numVec[i+1]){
        numVec.erase(numVec.begin()+i);
        i--;
      }
    }
    if(isDone == true) break;
  }

  for(int i=0; i<numN; i++){
    for(int j=0; j<numVec.size(); j++){
      if(copyVec[i] == numVec[j]){
        printf("%d ", j);
      }
    }
  }
}
