#include<iostream>
using namespace std;
// A-Z :65-90
// 1:2초 2:3초 3:4초 4:5초
//아스키코드로 범위로 지정하면 좀 편할듯

int transABC(char ch[16]){
  int intList[15];
  for (int& num:intList){num = 0;}

  int temp;
  for (int i=0; i<15; ++i){
    intList[i] = int(ch[i]);
    temp = intList[i];
    if (temp>=65 && temp<68){intList[i] = 2;}
    else if (temp>=68 && temp<71){intList[i] = 3;}
    else if (temp>=71 && temp<74){intList[i] = 4;}
    else if (temp>=74 && temp<77){intList[i] = 5;}
    else if (temp>=77 && temp<80){intList[i] = 6;}
    else if (temp>=80 && temp<84){intList[i] = 7;}
    else if (temp>=84 && temp<87){intList[i] = 8;}
    else if (temp>=87 && temp<91){intList[i] = 9;}
    else {intList[i] = 0;}
  }
  
  int result=0;
  for (int num:intList){
  //  cout << "num: " << num << "\n";
    if(num != 0){
      result += (num+1);
    }
  }
  return result;
}


int main(){
  char chList[16];
  for (char& ch:chList){ ch = ' ';}
  cin >> chList;
  cout << transABC(chList);
}