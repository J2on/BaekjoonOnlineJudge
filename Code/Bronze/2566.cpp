#include<iostream>
using namespace std;

int main(){
    int num;
    int maxCol, maxRow;
    int maxNum = -1;
    for(int col = 0; col < 9; col++){
        for(int row = 0; row < 9; row++){
            cin >> num;
            if(num > maxNum){
                maxNum = num;
                maxCol = col + 1;
                maxRow = row + 1;
            }
        }
    }
    cout << maxNum << endl;
    cout << maxCol << ' ' << maxRow;
    
}
