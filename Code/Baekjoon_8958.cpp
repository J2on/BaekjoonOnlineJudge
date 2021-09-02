#include<iostream>
#include<string>
using namespace std;

int main() {
  int TestCount;
  string Quiz;
  cin >> TestCount;

  for (int i=0; i <TestCount; ++i){
    int Score = 0;
    int Stack = 0;
    cin >> Quiz;
    for (int k=0; k < Quiz.length(); k++){
      if (Quiz[k] == 'O'){
        Stack++;
        Score +=Stack ;
      }
      else {
        Stack = 0;
      }
    }
    cout << Score << "\n";
  }
}
