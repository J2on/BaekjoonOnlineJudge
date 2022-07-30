#include <iostream>
#include <vector>
#include <string>
using namespace std;
/*
 BaekJoon_14425 : 문자열 집합
 집합s에 n개의 문자를 입력시키고 m개의 문자 중 몇개가 포함되어있는지 찾는 문제
 a = 97 z =122
 26개
  입력받은 문자열의 첫글자를 기준으로 vector로 정렬하여 m에서 입력받은 문자열의 앞글자와 같은 문자열들만 비교하도록 하였음
 */

int main() {
    ios_base::sync_with_stdio(false);

    int numN, numM;
    cin >> numN >> numM;
    string strTemp;
    vector<vector<string>> matrixS;
    vector<string> emptyVec;

    for (int i = 0; i < 26; i++) {
        matrixS.push_back(emptyVec);
    }

    for (int i = 0; i < numN; i++) {
        cin >> strTemp;
        matrixS[int(strTemp[0]) - 97].push_back(strTemp);
    }

    int result = 0;
    string strInput;
    int headNum;
    int numTemp;
    for (int i = 0; i < numM; i++) {
        cin >> strInput;
        headNum = int(strInput[0]) - 97;
        numTemp = matrixS[headNum].size();
        if (numTemp != 0) {
            for (int j = 0; j < numTemp; j++) {
                // 시간초과를 해결하기 위해 고안안 방법... 마지막 글자가 같은 경우만 두 문자열을 비교하도록 제한함
                if (matrixS[headNum][j].back() == strInput.back()) { 
                    if (matrixS[headNum][j] == strInput) { result++; }
                }
            }
        }
    }
    cout << result;
}
