#include <iostream>
using namespace std;

int main() {
  int size=101;
  char word[size];
  for (int i = 0; i < 101; ++i){
    word[i] = ' ';
  }// word배열에 입력이 없는칸에 무작위로 뭔가 있는데 거기 알파벳이 있을수도 있어서 다 ' '으로 초기화 해줌

  int abc[26];
  for(int i=0; i < 26; ++i){
    abc[i] = -1;
  }
  
  // 아스키코드를 이용하여 단어를 문자로 입력받고 숫자로 변환
  int attempt = 0;
  cin >> word;
  for (char ch:word){
    int key = int(ch) - 97; //변환하면 알파벳을 소문자부터 순서대로 나열한것 이기 때문에 이렇게 했음
    if(abc[key] == -1){
      abc[key] = attempt;
    }
    ++attempt;
  }
  for(int k=0; k < 26; ++k){
    cout << abc[k] << ' ';
  }  
}