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
  vector<vector<string>> vecSortSize;
  for(int i=0; i<=50; i++){
    vector<string> vecWord;
    vecSortSize.push_back(vecWord);
  }

  string word;
  for(int i=0; i<numN; i++){
    cin>> word;
    vecSortSize[word.size()].push_back(word);
  }

  // 중복제거
  for(int i=0; i<=50; i++){
    sort(vecSortSize[i].begin(),vecSortSize[i].end()); // <- 이 과정에서 알파벳 정렬
    vecSortSize[i].erase(unique(vecSortSize[i].begin(), vecSortSize[i].end()),vecSortSize[i].end());
  }

  // 출력
  for(vector<string> vec:vecSortSize){
    for(string st:vec){
      cout << st << endl;
    }
  }
}
