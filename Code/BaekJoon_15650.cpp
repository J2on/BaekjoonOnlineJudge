#include<iostream>
#include<vector>
using namespace std;

/*
  BaekJoon_15650번 N과M (2)
  https://yabmoons.tistory.com/99
  ↑ 이번에도 도저히 못풀겠어서 여길 참고해씀...
  너무 어렵다..

  15649번과 달라진거슨 comb함수가 돌아갈때마다 이번 재귀에 들어서기 전 숫자를 고려하지 않아야 하는것
  ex> 5개중 2개를 고를때
  2 다음에 반복문이 1을 검사하는것이 아닌 최소 2 혹은 3을 검사해야 함
  그걸 몰랐는데 그냥 함수에 변수 하나 추가하니 뚝딱이네

  comb 함수 안에 comb 함수가 계속 반복되는 형태
*/

int numN;
int numM;
vector<bool> isAvail;
vector<int> result;


void comb(int index, int depth){
  if(depth == numM){
    for(int num:result){
      printf("%d ", num);
    }
    printf("\n");
  }
  // 어떻게 해야 지난번보다 작은 수를 고려하지 않을까 생각했는데
  else{//   ↓ 여기 시작점이 지난 수여야 함...
    for(int i=index; i<numN; i++){
      if(isAvail[i] == true) continue;
      else{
        isAvail[i] = true;
        result.push_back(i+1);
        comb(i,depth +1);
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
  comb(0,0);
}