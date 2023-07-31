#include <iostream>
#include <vector>
using namespace std;

int main(){
    int col, row;
    cin >> col >> row;
    
    int num;
    vector<vector<int>> vec;
    for(int c =0; c<col; c++){
        vector<int> rowVec;
        for(int r=0; r<row; r++){
            cin >> num;
            rowVec.push_back(num);
        }
        vec.push_back(rowVec);
    }
    
    for(int c =0; c<col; c++){
        for(int r=0; r<row; r++){
            cin >> num;
            vec[c][r] += num;
        }
    }
    
    
    for(int c =0; c<col; c++){
        for(int r=0; r<row; r++){
            cout << vec[c][r] << ' ';
        }
        cout << "\n";
    }
}
