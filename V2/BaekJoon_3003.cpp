#include <iostream>
using namespace std;

/*
BaekJoon_3003 : 킹, 퀸, 룩, 비숍, 나이트, 폰
1 1 2 2 2 8
주어진 숫자들과 차이를 출력
*/

int main() {
	int blackPiece[6] = { 1, 1, 2, 2, 2, 8 };
	int temp;
	for (int i = 0; i < 6; i++) {
		cin >> temp;
		cout << blackPiece[i] - temp << " ";
	}
}
