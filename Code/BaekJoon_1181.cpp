#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

/*
  BaekJoon_1181 단어 정렬
  
  고려사항
  1. 단어의 개수로 오름차순 정렬
  2. 개수가 같은경우 알파벳 오름차순 정렬
  3. 중복된 단어 입력 시 한번만 출력

*/

int main(){
  int numN;
  scanf("%d", &numN);
  // 입력
  vector<string> vecWord;
  string word;
  for(int i=0; i<numN; i++){
    cin>> word;
    vecWord.push_back(word);
  }
  // 중복제거
  sort(vecWord.begin(),vecWord.end()); // <- 이 과정에서 알파벳 정렬
  vecWord.erase(unique(vecWord.begin(), vecWord.end()),vecWord.end());
  // 개수로 정렬 중...
  bool isDone;
  string temp;
  while(1){
    isDone = true;
    for(int i=0; i<vecWord.size()-1; i++){
      if(vecWord[i].size() > vecWord[i+1].size()){
        temp = vecWord[i];
        vecWord[i] = vecWord[i+1];
        vecWord[i+1] = temp;
        isDone = false;
      }
    }
    if(isDone == true) break;
  }
  // 출력
  for(string st:vecWord){
    cout << st << endl;
  }
  // 역시 시간초과,,,,,
}