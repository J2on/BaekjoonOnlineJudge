#include <iostream>

using namespace std;

int dayOfSnail(int& numA, int& numB, int& numV){
  int day = 1;
  int distance = 0;

  while(1){
    distance += numA;
    if (distance >= numV){
      return day;
    }
    else{
      distance -= numB;
      day++;
    }
  }
}


int main() {
  int numA;
  int numB;
  int numV;
  cin >> numA >> numB >> numV;
  cout << dayOfSnail(numA, numB, numV) << "\n";
}