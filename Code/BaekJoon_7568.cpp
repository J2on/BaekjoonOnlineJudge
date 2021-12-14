#include <iostream>
#include <vector>

using namespace std;

/*
  BaekJoon_7568 덩치
*/

int main() {
  int numN;
  cin >> numN;
  vector<int> size(3);
  vector<vector<int>> sizeVec;
  vector<vector<vector<int>>> sizeRank;
  for(int i=0; i<numN; i++){
    scanf("%d %d", &size[0], &size[1]);
    size[2] = i;
    sizeVec.emplace_back(size);
    sizeRank.emplace_back(sizeVec);
    sizeVec.clear();
  } // size는 몸무게 키 입력받은순서 를 저장함
  
  for(int i=0;i<numN; i++){
    printf("%d %d %d\n", sizeRank[i][0][0], sizeRank[i][0][1], sizeRank[i][0][2]);
  }


  bool isDone;
  vector<vector<int>> temp;
  while(1){
    isDone = true;
    for(int i=0; i<numN-1; i++){
      if(sizeRank[i+1][0][0] > sizeRank[i][0][0]){ // 몸무게가 큰경우
        if(sizeRank[i+1][0][1] >= sizeRank[i][0][1]){ // 키가 크거나 같은경우
          temp = sizeRank[i];
          sizeRank.erase(sizeRank.begin()+i);
          sizeRank.emplace(sizeRank.begin()+i, temp);
          isDone = false;
        }
        else { // 몸무게가 큰데 키가 작은경우 => 둘은 같은 등수를 가짐
          for(int k=0; k<sizeRank[i+1].size(); k++){
            sizeRank[i].emplace_back(sizeRank[i+1][k]);
          }
          sizeRank[i+1].clear();
          isDone = false;
        }
      }   
      else if(sizeRank[i+1][0][0] == sizeRank[i][0][0]){ // 몸무게가 같은경우
        if(sizeRank[i+1][0][1] > sizeRank[i][0][1]){ // 키가 큰 경우
          temp = sizeRank[i];
          sizeRank.erase(sizeRank.begin()+i);
          sizeRank.emplace(sizeRank.begin()+i, temp);
          isDone = false;
        }
        else if(sizeRank[i+1][0][1] == sizeRank[i][0][1]){ // 키가 같은 경우
          for(int k=0; k<sizeRank[i+1].size(); k++){
            sizeRank[i].emplace_back(sizeRank[i+1][k]);
          }
          sizeRank[i+1].clear();
          isDone = false;
        } // 키가 작은 경우는 생각하지 않음
      }
      else { //몸무게가 작은 경우
        if(sizeRank[i+1][0][1] > sizeRank[i][0][1]){ // 키가 큰 경우
          for(int k=0; k<sizeRank[i+1].size(); k++){
            sizeRank[i].emplace_back(sizeRank[i+1][k]);
          }
          sizeRank[i+1].clear();
          isDone = false;
        }
      }
    }
    if(isDone == true) break;
  }

  // 이렇게 풀다가 망함 ㅋ
}  
