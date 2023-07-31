#include <iostream>
using namespace std;

int main(){
    int whiteBoard[100][100];
    for(int x=0; x<100; x++){
        for(int y=0; y<100; y++){
            whiteBoard[x][y] = 0;
        }    
    }
    
    int num;
    cin >>num;

    int inputX, inputY;
    for(int i=0; i<num; i++){
        cin >> inputX >> inputY;
        for(int x=inputX; x<inputX + 10; x++){
            for(int y=inputY; y<inputY + 10; y++){
                whiteBoard[x][y] = 1;
            }
        }
    }
    
    int areaFilledOfBlack = 0;
    for(int x=0; x<100; x++){
        for(int y=0; y<100; y++){
            if(whiteBoard[x][y] == 1){
                areaFilledOfBlack++;
            }
        }    
    }
    
    cout << areaFilledOfBlack;
}
