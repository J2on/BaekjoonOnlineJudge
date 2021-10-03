#include <iostream>
using namespace std;

int roomOfHotel(const int& numH,const int& numW,const int& numN){
  // numH값으로 numN나누고 몫을 numW에서 하나 / 나머지를 numH중 하나로 해서
  int room;
  int floor = numN % numH;
  if (floor == 0) {
    floor = numH;
    room = numN / numH;
  }
  else {
    room = numN / numH + 1;
  }
  
//  cout << "floor : " << floor << "\n";
//    cout << "room : " << room << "\n";

  return floor * 100 + room;
}


int main() {
  int testCase;
  int numH;
  int numW;
  int numN;
  cin >> testCase;
  for(int i =0; i < testCase; i++){
    cin >> numH >> numW >> numN;
    cout << roomOfHotel(numH, numW, numN)  << "\n";
  }
}