#include <iostream>
#include <vector>

using namespace std;

/*
  BaekJoon_2798 블랙짹
*/

int main() {
  int numN;
  int numM;
  cin >> numN >> numM;
  vector<int> cardVec;

  int temp;
  for(int i = 0; i < numN; i++){
    cin >> temp;
    cardVec.push_back(temp);
  }

  int max = 0;
  int sum;
  for(int k= 0; k < numN; k++){
    for(int j = k+1; j < numN; j++){
      for(int h = j+1; h < numN; h++){
        sum = cardVec[k]+cardVec[j]+cardVec[h];
        if(sum > max && sum <= numM){
          max = sum;
          
        }
      }
    }
  }
  
  cout << max;
}  