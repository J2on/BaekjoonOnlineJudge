#include <iostream>
using namespace std;

int FindFunc(int num){
  if (num < 100) {
    return num; // 100보다 작은 수의 경우 모두 한수이기 때문
  }
  
  int result = 99;
  
  
  for (int i = 100; i <= num; ++i){
    int share = 0; // List의 크기 알기위해 자릿수를 구함
    int temp = i;
    while(temp > 0) {
      share++;
      temp /= 10;
    } // 자릿수를 구하는 과정

    int* numList = new int[share]; // 자리마다 쪼개서 넣어줄 리스트 생성

    temp = i;
    for(int j = 0; j <= share; ++j) { // 각 자리마다 쪼개서 동적배열에 넣어줌
      numList[j] = temp % 10;
      temp /= 10;
    }
    
    bool isTrue= true; //한수가 아니라면 false로 바뀌는 변수
    for (int k =0; k < share-2; ++k) {
      if (numList[k]-numList[k+1] != numList[k+1]-numList[k+2]){
        isTrue = false;
      }
      else {continue;}
    }
    if (isTrue == true){
      result++;
    }
    //확인을 위한 코드
    //cout << "T/F: " << isTrue << "\nNum: "<<i <<"\n";
    delete[] numList;
  }
  return result;
}

int main(){
  int num;
  cin >> num;
  cout << FindFunc(num) << "\n";
}

