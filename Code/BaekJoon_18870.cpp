#include<iostream>
#include<vector>
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
  int *arrCount = new int[2000000001];
  for(int i=0; i<2000000001; i++){
    arrCount[i] = 0;
  }

  for(int i=0; i<numN; i++){
    arrCount[i+1000000000]++;
  }

  vector<int> vecResult;
  for(int i=0; i<2000000001; i++){
    if(arrCount[i] != 0){
      vecResult.push_back(i-1000000000);
    }
  }

  for(int i:vecResult){
    cout << i << endl;
  }
}