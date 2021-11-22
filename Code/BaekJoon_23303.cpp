#include <iostream>
#include <string>
using namespace std;

int main() {
  string str;
  getline(cin,str);

  if(str.find("D2") != -1 || str.find("d2") != -1){
    cout << "D2";
  }
  else {
    cout << "unrated";
  }
}  