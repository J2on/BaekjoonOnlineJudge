#include <iostream>
#include <string>
using namespace std;


float convertScoreStringToFloat(string score){
    
    if(score == "A+")
      return 4.5;
    else if(score == "A0")
      return 4.0;
    else if(score == "B+")
      return 3.5;
    else if(score == "B0")
      return 3.0;
    else if(score == "C+")
      return 2.5;
    else if(score == "C0")
      return 2.0;
    else if(score == "D+")
      return 1.5;
    else if(score == "D0")
      return 1.0;
    else if(score == "F")
      return 0.0;
    else{
      return 0;
    }
}

float calcAverage(){
    float totalCredit =0;
    float totalScore = 0;
    
    float score;
    float credit;
    string subjectName;
    string scoreStr;
    
    for(int i=0; i<20; i++){
        cin >> subjectName >> credit >> scoreStr;
        if(scoreStr == "P"){ credit = 0; }
        totalCredit += credit;
        totalScore += convertScoreStringToFloat(scoreStr) * credit;
    }
    return totalScore / totalCredit;
}


int main(){
    cout << calcAverage();
}
