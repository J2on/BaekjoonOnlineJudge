#include<iostream>
using namespace std;

int main() {
  int Subject;
  cin >> Subject;
  float ScoreArray[Subject];
  int Max = 0;
  for (int i=0; i < Subject; ++i) {
    cin >> ScoreArray[i];
    if(ScoreArray[i] > Max) {
      Max = ScoreArray[i];
    }
  }
  float Total = 0;
  for (float &Score:ScoreArray){
    Score = (Score/Max) * 100;
    Total += Score;
  }
  
  float Average = Total/Subject;
  cout << Average;
}
