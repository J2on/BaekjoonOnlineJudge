#include <iostream>
#include <string>
using namespace std;

int main(){
  string word;
  cin >> word;

  string croList[8] = {"c=","c-","dz=","d-","lj","nj","s=","z="};

  for(string str:croList){
    while(1){
      int index = word.find(str);
      if (index == string::npos){ //더 이상 str이 존재하지 않는 경우
        break;
      }
      word.replace(index, str.length(), "0");
    }
  }
  cout << word.length() << "\n";
}