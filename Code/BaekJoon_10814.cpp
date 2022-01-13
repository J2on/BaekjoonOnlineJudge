#include<iostream>
#include<vector>
#include<string>
using namespace std;

/*
  BaekJoon_10814 나이순 정렬
  1`200까지의 벡터를 만들어 벡터의 인덱스를 나이처럼 생각
  21살이면 21번째 vector<string> 순차적으로 쌓이게 했음
*/

int main(){
  int numN;
  scanf("%d", &numN);
  vector<vector<string>> vecUserAge;
  for(int i=0; i<=200; i++){
    vector<string> vecUser;
    vecUserAge.push_back(vecUser);
  }

  // 입력
  int age;
  char name[101];
  for(int i=0; i<numN; i++){
    scanf(" %d", &age);
    scanf("%s", name);
    vecUserAge[age].push_back((string)name);
  }

  // 출력
  for(int i=0; i<=200; i++){
    for(int numUser=0; numUser<vecUserAge[i].size(); numUser++){
      printf("%d %s \n", i, vecUserAge[i][numUser].c_str());
    }
  }
}