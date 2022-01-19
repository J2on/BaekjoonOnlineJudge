#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
  BaekJoon_18870 좌표압축
  도대체 이게 무슨 소리일까 했는데
  리스트 안에 들어있는 수들을 쫙 줄세워서
  가장 작은애 0 다음 1 다음 2 
  이런식으로 바꿔버리는거 
*/

int main(){
  int numN;
  scanf("%d",&numN);
  
  vector<int> numVec;
  int copyArr[numN];
  int numX;
  for(int i=0; i<numN; i++){
    cin>> numX;
    numVec.push_back(numX);
    copyArr[i] = numX;
  }

  // 중복제거 및 정렬
  sort(numVec.begin(), numVec.end());
  numVec.erase(unique(numVec.begin(),  numVec.end()),numVec.end());  

  // 중복제거하고 정렬하면 index가 압축된 좌표와 같은것을 이용
  for (int i = 0; i < numN; i++) {
    int idx = lower_bound(numVec.begin(), numVec.end(),copyArr[i]) - numVec.begin();
    printf("%d ", idx);
  }
  
    // 아니 지금까지 시간초과가 출력부에 문제가 있을줄은 몰랐지,,,,
}
