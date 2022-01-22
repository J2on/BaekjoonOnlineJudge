#include <iostream>
using namespace std;

int main() {
  // 문자열을 입력받을 char배열을 선언 후 '0'으로 초기화
  char word[1000001];
  for (char& ch:word){
    ch = '0';
  }
  // 문자열 입력받음
  cin.getline(word,1000001);

  // 최종 출력할 결과값 변수 설정
  int result = 0;
  
  // 앞서 문자열의 조건 중 "공백으로 시작할 수 있다"에 따라 첫 문자가 공백일 시 ~로 변경
  if (word[0] == ' '){
    word[0] = '~';
  }

  // k번째 지점이 공백이고 k+1이 char배열의 끝이 아닌경우 단어의 끝으로 생각해 한개씩 카운팅 해준다.
  // 이때 마지막 단어가 카운팅이 안되는 것을 생각하여 차후 1을 더해준다.
  for (int k=0; k<1000001; ++k){
    if(word[k] == ' ' && word[k+1] != '\0'){
      ++result;
    }
  }
  
  // 단어가 없이 끝나는 경우 0을 출력, 그 외에 경우에는 1을 추가한 후 출력
  if (word[0] == '~' && word[1] == '\0'){cout << 0;}
  else {cout << result+1;}    
}
