#include<iostream>
#include<vector>
using namespace std;

int numN;
int result = 0;
vector<vector<bool>> isOk;

void printBool(vector<vector<bool>> boolA){
  cout << endl;
  for(vector<bool> bV:boolA){
    for(bool b:bV){
      if(b == true){
        cout << " T    ";
      }
      else {
        cout<< " F    ";
      }
    }
    cout << endl;
  }
}


void chess(int numQ){
  if(numQ == numN){
    result++;
    return;
  }
  
  int numBig;
  int numSm;
  for(int x=0; x<numN; x++){
    for(int y=0; y<numN; y++){
      if(isOk[x][y] == true) continue;
      // x값이 같거나 y값이 같은 경우 제외
      for(int i=0; i<numN; i++){
        isOk[x][i] = true;
        isOk[i][y] = true;
      }
      numBig = x;
      if(y>x) numBig = y;
      for(int i=0; i < numN -numBig; i++){
        isOk[x+i][y+i] = true;
      }
      numSm = x;
      if(x>y) numSm =y;
      for(int i=0; i<numSm; i++){
        isOk[x-i][y-i] = true;
      }
      printBool(isOk);
      chess(numQ+1);
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
  printf("%d", result);
}
