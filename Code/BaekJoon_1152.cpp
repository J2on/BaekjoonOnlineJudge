#include <iostream>
using namespace std;

int main() {
  char word[1000001];
  for (char& ch:word){
    ch = '0';
  }

  cin.getline(word,1000001);


  int result = 0;
 
  if (word[0] == ' '){
    word[0] = '~';
  }

  for (char& ch2:word){
    if(ch2 == ' '){
      ch2 = '^';
    }
  }

  for (int k=0; k<1000001; ++k){
    if(word[k] == '^' && word[k+1] != '\0'){
      ++result;
    }
  }

  if (word[0] == '~' && word[1] == '\0'){cout << 0;}
  else {cout << result+1;}    

/* 확인용 코드
  for(int i=0; i < 100; i++){
    cout << word[i] << endl;
  }
*/  
}