#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
  int numN;
  cin >> numN;
  vector<int> numVec(numN);  
  for(int i=0; i<numN; i++){
    scanf("%d", &numVec[i]);
  }
  sort(numVec.begin(),numVec.end());
  for(int i:numVec){
    printf("%d \n",i);
  }
}
