#include <iostream>
#include <vector>
using namespace std;
/* matrix
6층  1   8   36  120 330
5층  1   7   28  84  210
4층  1   6   21  56  126
3층  1   5   15  35  70
2층  1   4   10  20  35
1층  1   3   6   10  15
0층  1   2   3   4    5
*/

int findNumOfPeople(const int& numK, const int& numN){
  vector<vector<int>> vecAPT;
  
  vector<int> vecFloor;
  //0층 만들기
  for (int j = 0; j < numN; j++){
    vecFloor.push_back(j+1);
  }
  vecAPT.push_back(vecFloor);
  
  //2층 이후
  if(numK >= 1){
    for (int i = 1; i <= numK; i++){
      vecFloor.clear();
      for (int k = 0; k < numN; k++) {
        if (k == 0){ vecFloor.push_back(1);}
        else {
          vecFloor.push_back(vecAPT[i-1][k] + vecFloor[k-1]);
        }
      }
      vecAPT.push_back(vecFloor);
    }
  }

  // numN-1인 이유는 0층에 1호부터 시작이기 때문
  return vecAPT[numK][numN-1];
}




int main() {
  int testCase;
  cin >> testCase;
  int numK;
  int numN;

  for (int i = 0; i < testCase; ++i){
    cin >> numK;
    cin >> numN;
    cout << findNumOfPeople(numK, numN) << "\n";
  }
}