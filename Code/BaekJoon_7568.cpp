#include <iostream>
#include <vector>

using namespace std;

/*
  BaekJoon_7568 덩치
*/

int main() {
  int numN;
  cin >> numN;
  int* size = new int[2];
  vector<int*> sizeVec;

  for(int i=0; i<numN; i++){
    scanf("%d %d", &size[0], &size[1]);
    size[2] = i;
    sizeVec.push_back(size);
  } // size는 몸무게 키 입력받은순서 를 저장함

  for(int i=0; i<3; i++){
    cout<< size[i] << endl;
  }



  delete[] size;
}  