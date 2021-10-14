#include <iostream>
#include <vector>
using namespace std;

vector<int> addHugeNum(vector<int> numA,  vector<int> numB){

	while(1){
    if(numA.size() == numB.size()){ break; }
    numB.insert(numB.begin(),0);
  }


  // 첫 수 빼고 나머지 숫자들을 더하는 상황
  for (int i = numA.size() -1; i >= 1; i--){
    if(numA[i] + numB[i] >= 10){
      numA.at(i-1) += 1;
      numA.at(i) = (numA.at(i) + numB.at(i)) - 10;
    }
    else{
      numA.at(i) += numB.at(i);
    }
  }
  

  // 첫 수 끼리 더했을때 10이 넘는 경우
  if(numA.at(0) + numB.at(0) >= 10){
    numA.at(0) = (numA.at(0) + numB.at(0)) -10;
    numA.insert(numA.begin(),1);
    numB.insert(numB.begin(),0);
     // 이따 1일때 또 더하니까 없애주는 거
  }
  // 그렇지 않은 경우
  else {
    numA.at(0) += numB.at(0);
  }

  return numA;
}

int main() {
  vector<int> numA;
  vector<int> numB;
  char temp;
  // 공백 전까지 입력받기
  while (1){
    temp = cin.get();
    if(temp == ' ') {
      break;
    }
    numA.push_back(temp-48); // 입력받은 문자가 ASCII CODE 형태라 바꿔줌
  }
  // 개행문자 전까지 입력받기
  while (1){
    temp = cin.get();
    if(temp == '\n') {
      break;
    }
    numB.push_back(temp-48);
  }

  // 앞숫자가 크던 뒷숫자가 크던 상관 없도록 하기
  vector<int> result;
  if (numA.size() > numB.size()){
    result = addHugeNum(numA, numB);
  }
  else {
    result = addHugeNum(numB, numA);
  }

  for(int num:result){
    cout << num;
  }

  return 0;
}
