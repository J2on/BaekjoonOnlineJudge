#include<iostream>
using namespace std;

int reverseInt(int num){
  int numList[3];

  for(int i=0; i<3; ++i){
    numList[i] = num%10;
    num /= 10;
  }
  int result = numList[0]*100 + numList[1]*10 + numList[2];
  return result;
}

int compareInt(int numA, int numB){
  if (numA > numB) {return numA;}
  else {return numB;}
}

int main() {
  int numA;
  int numB;

  cin >> numA >> numB;

  int revA = reverseInt(numA);
  int revB = reverseInt(numB);

  int result = compareInt(revA, revB);

  cout << result;
}