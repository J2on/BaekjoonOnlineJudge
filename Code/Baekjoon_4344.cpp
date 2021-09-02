#include<iostream>
using namespace std;

int main() {
  int TestCount;
  cin >> TestCount;
  int NumStud;

  for(int i=0; i < TestCount; ++i){
    int TotalScore = 0;
    int Average = 0;
    double TopSide = 0;
    cin >> NumStud;
    int StudentList[NumStud];
    for(int k=0; k <NumStud; ++k){
      cin >> StudentList[k];
      TotalScore +=StudentList[k];
    }
    Average = TotalScore/NumStud;
    for(int j:StudentList){
      if (j > Average){
        TopSide++;
      }
    }
    cout<<fixed;
    cout.precision(3);
    cout << TopSide/NumStud * 100 << "%\n";
  }
}
