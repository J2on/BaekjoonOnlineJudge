#include<iostream>
#include<vector>
using namespace std;

/*
  BaekJoon_15651번 N과M (3)
  
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
        //isAvail[i] = true;
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