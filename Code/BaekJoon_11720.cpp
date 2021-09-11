#include <iostream>
using namespace std;

int main() {
  //ASCII CODE 48~57 : 0~9
  int num;
  int result=0;
  cin >> num;
  int* numList = new int[num];
  
  char ch;
  for (int i =0; i < num; i++){
    cin >> ch;
    numList[i] = ch;
  }

  for(int k =0; k < num; k++){
    result += (int(numList[k])-48);
  }
  cout << result << "\n"; 

  delete[] numList;
}