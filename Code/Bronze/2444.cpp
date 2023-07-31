#include <iostream>
using namespace std;

int main(){
  int num;
  cin >> num;
  
  num = num*2 - 1;

  int spaceNum = num/2;
  int starNum = 1; 
  for(int i=0; i<num; i++){
    for(int j=0; j<spaceNum; j++){
        cout << ' ';
      }
      for(int k=0; k<starNum; k++){
        cout << '*';
      }
    if(i < num/2){
      cout << endl;
      spaceNum--;
      starNum += 2;
    }
    else{
      cout << endl;
      spaceNum++;
      starNum -= 2;
    }
  }
    
}
