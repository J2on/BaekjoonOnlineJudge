#include <iostream>
#include <vector>
#include <string>
using namespace std;
/*
 BaekJoon_14425 : 문자열 집합
 집합s에 n개의 문자를 입력시키고 m개의 문자 중 몇개가 포함되어있는지 찾는 문제
 a = 97 z =122
 26개
 */

int main() {
    ios_base::sync_with_stdio(false);

    int numN, numM;
    cin >> numN >> numM;
    string strTemp;
    vector<vector<string>> matrixS;
    vector<string> emptyVec;

    for(int i =0; i<26; i++){
        matrixS.push_back(emptyVec);
    }

    for(int i=0; i<numN; i++){
        cin >> strTemp;
        matrixS[int(strTemp[0]) - 97].push_back(strTemp);
    }

    int result = 0;
    string strInput;
    int headNum;
    int numTemp;
    for(int i=0; i<numM; i++){
        cin >> strInput;
        headNum = int(strInput[0]) - 97;
        numTemp = matrixS[headNum].size();
        if(numTemp != 0){
            for(int j=0; j<numTemp; j++){
                if(matrixS[headNum][j] == strInput){ result++; }
            }
        }
    }
    cout << result;
}
