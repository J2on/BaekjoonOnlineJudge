#include<iostream>
#include<vector>
using namespace std;

/* 
 BaekJoon_9663 : N-Queen
 https://chanhuiseok.github.io/posts/baek-1/
 참고 했습니다.
*/
int numN;
int result = 0;
int arrQueen[15];

bool testLocation(int numQ){
  for(int i=0; i<numQ; i++){
    if(arrQueen[i] == arrQueen[numQ] || numQ - i == abs(arrQueen[numQ] - arrQueen[i])){
      return false;
    }
  }
  return true;
}

void chess(int numQ){
  if(numQ == numN){
    result++;
    return;
  }

  for(int x=0; x<numN; x++){
    arrQueen[numQ] = x;
    if(testLocation(numQ)){
      chess(numQ+1);  
    }
  }
}


int main() {
  scanf("%d", &numN);
  chess(0);
  printf("%d", result);
}