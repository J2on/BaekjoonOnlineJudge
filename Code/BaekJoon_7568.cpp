#include <iostream>
#include <vector>
using namespace std;

/*
  BaekJoon_7568 덩치
  핵심을 잘못생각하고 있었다.
  역시 이렇게 어려울리가 없었다
  3중 벡터를 막 쓰고 했었는데
  결론은 그냥
  모두 입력받고
  i번째 친구가 나머지 친구들과 비교해서 큰애가 있으면 등수를 하나 씩 더해주면 끝이었다
  초등 올림피아에 나올정도면 초등생들도 해결하는 문제일건데
  나는 왜 이렇게 멍청한지 모르겠다.
*/

int main() {
  int numN;
  scanf("%d", &numN);
  vector<int> size(2);
  vector<vector<int>> sizeVec;
  for(int i=0; i<numN; i++){
    scanf("%d %d", &size[0], &size[1]);
    sizeVec.emplace_back(size);
  }
  int rank;
  
  for(int i=0; i<numN; i++){
    rank = 1;
    for(int k=0; k<numN; k++){
      if(sizeVec[k][0] > sizeVec[i][0] && sizeVec[k][1] > sizeVec[i][1]){
        rank++;
      }
    }
    printf("%d ", rank);
  }
  
}
