#include <iostream>
#include <string>
using namespace std;

bool isGroup(string str){
  bool result = true;

  for (int i=0; i<str.length(); ++i){
    if(str.find(str[i], i+1) != string::npos && str[i] != str[i+1] ){
      // str.find() == string::npos 는 
      // find가 못찾았을때 npos를 반환하는걸 사용하는것
      result = false;
    }  
  }
  return result;
}

int main(){
  int num;
  cin >> num;
  int result=0;

  string str;
  for (int i=0; i<num; ++i){
    cin >> str;
    if(isGroup(str) == true){result++;}
  }

  cout << result << "\n";
}