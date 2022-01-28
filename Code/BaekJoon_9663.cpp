#include<iostream>
#include<vector>
using namespace std;

int numN;
int result = 0;
vector<vector<bool>> isOk;

void chess(int numQ){
  if(numQ == numN){
    result++;
    return;
  }
  
  for(int x=0; x<numN; x++){
    for(int y=0; y<numN; y++){
      if(isOk[x][y] == true) continue;
              
    }
  }
  
}


int main() {
  scanf("%d", &numN);
  vector<bool> emptyVec;
  for(int x=0; x<numN; x++){
    isOk.push_back(emptyVec);
    for(int y=0; y<numN; y++){
      isOk[x].push_back(false);
    }
  }
  
  chess(0);
  printf("%d", numN);
}