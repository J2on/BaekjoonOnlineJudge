#include<iostream>
#include<vector>
using namespace std;

/*
  BaekJoon_1427 소트인사이드
*/

int main(){
  vector<int> vecC;
  long long numN;
  scanf("%lld", &numN); 
  // 수가 크니 longlong으로 받아 쪼개서 vec에 넣었다.
  
  while(numN>0){
    vecC.push_back(numN % 10);
    numN /= 10;
  }
  
  // counting sort 사용
  int countN[10] = {0,};
  for(int num:vecC){
    countN[num]++;
  }
  vecC.clear();
  // 내림차순 정렬이기 때문에 역으로 9에서부터 채워줌
  for(int i=9; i>=0; i--){
    if(countN[i] != 0){
      for(int k=0; k<countN[i]; k++){
        vecC.push_back(i);
      }
    }
  }

  for(int num:vecC){
    printf("%d", num);
  }
}