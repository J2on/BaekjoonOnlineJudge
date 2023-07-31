#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    vector<string> blackBoard;
    string str;
    for(int col=0; col<5; col++){
        cin >> str;
        blackBoard.push_back(str);
    }
    
    for(int row=0; row<15; row++){
        for(int col=0; col<5; col++){
            if(blackBoard[col].size() > row){
              cout << blackBoard[col][row];
            }
        }
    }
}
