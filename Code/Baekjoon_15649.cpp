#include<iostream>
#include<vector>
using namespace std;

/*
  BaekJoon_15649번 N과M (1)
  https://yabmoons.tistory.com/100
  ↑ 도저히 못풀겠어서 여길 참고해씀...

  comb 함수 안에 comb 함수가 계속 반복되는 형태
*/

int numN;
int numM;
vector<bool> isAvail;
vector<int> result;


void comb(int depth){
  if(depth == numM){
    for(int num:result){
      printf("%d ", num);
    }
    printf("\n");
  }
  else{
    for(int i=0; i<numN; i++){
      if(isAvail[i] == true) continue;
      else{
        isAvail[i] = true;
        result.push_back(i+1);
        comb(depth +1);
        result.pop_back();
        isAvail[i] = false;
      }
    }
  }
}

int main(){
  scanf("%d %d", &numN, &numM);
  for(int i=0; i<numN;i++){
    isAvail.push_back(false);
  }
  comb(0);
}