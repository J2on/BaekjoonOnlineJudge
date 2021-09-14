#include <iostream>
using namespace std;

// A-Z 65-90, a-z 97-122
// char로 받고 int로 변환해서 90초과면 -32 하는게 좋을것 같다

int main() {
  int abcList[27] = {0,};
  char word[1000000] = {0,};
  
  int num;
  cin >> word;
  for (char ch:word){
    if(ch != 0){
      num = int(ch);
      if (num > 90){
        ++abcList[num-97];
      }
      else{
        ++abcList[num-65];
      }
    }
  }
  
  int index;
  int max=-1;
  bool isSame = false;

  for (int i=0; i<27; ++i) {
    if (max != 0 && abcList[i] == max){
      isSame = true;
    }
    else {
      if (abcList[i] > max) {
        max = abcList[i];
        index = i;
        isSame = false;
      }
    }
  }

  if (isSame == true){cout << "?\n";}
  else {cout << char(index + 65) << '\n';}
}