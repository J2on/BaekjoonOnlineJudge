#include <iostream>
#include <vector>
#include <list>
using namespace std;

/*
1/1 1/2 1/3 1/4 1/5 ---
2/1 2/2 2/3 2/4 --- ---
3/1 3/2 3/3 --- --- ---
4/1 4/2 --- --- --- ---
5/1 --- --- --- --- ---
--- --- --- --- --- ---
여기서 분모가 1인 첫번째 줄을 기준으로 잡았다.
첫번째 줄의 각 분수들이 몇번째 순서인지 구해서
vector에 담았고 vector에 담긴 수들을 대각선을 나누는 기준으로 생각했다.
같은 대각선 줄에 속하는 분수들이 분자+분모 값이 같은 것을 이용하였고
vector에 담긴 기준값의 순서가 13인데 인풋값이 15라면
인풋값이 2 큰것을 remainder 변수에 담고 분자와 분모를 조정하는 변수로 사용했다.
순서가 지그재그로 이어지므로 분자와 분모의 합인 sum변수가
홀수일때는 기준값부터 순서를 시작하고
짝수일때는 기준값을 해당 대각선의 마지막 순서로 보았다.
*/


string findFunc(int num){
  vector<int> columnList;
  int gap=0;
  int index=1;
  while(index < 10000000){
    index += gap;
    gap++;
    columnList.push_back(index);  
  }

  int sum=0;
  int remainder;
  for (int i = 0; i < columnList.size(); i++){
    if (num >= columnList[i] && num < columnList[i+1]){
      sum = columnList[i+1] - columnList[i] + 1;
      remainder = num - columnList[i];
    }
  }

  int firstNum;
  int secondNum;
  if(sum %2 != 0){ // 합이 홀수일때
    firstNum = 1+remainder;
    secondNum = sum-firstNum;
  }
  else{ // 합이 짝수일때
    secondNum = 1+remainder;
    firstNum = sum-secondNum;
  }
  string result = to_string(firstNum) + '/' + to_string(secondNum);
  return result;
}

int main() {
  int num;
  cin >> num;
  cout << findFunc(num) << "\n";
}