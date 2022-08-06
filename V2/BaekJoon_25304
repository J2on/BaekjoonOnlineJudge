#include <iostream>
using namespace std;

/*
BaekJoon_25304 : 영수증
첫째 줄 : 영수증 총 금액 x
둘째 줄 : 구매한 물건 종류 수 n
이후 n개의 줄 : 각 물건의 가격 a, 개수 b

일치하면 Yes, 아니면 No
*/

int main() {
	int numX; // 영수증 금액
	int numN; // 구매한 물건 종류
	int numA; // 물건의 가격
	int numB; // 해당 물건의 구매량

	cin >> numX;
	cin >> numN;
	int total = 0; // 실 구매금액
	for (int i = 0; i < numN; i++) {
		cin >> numA >> numB;
		total += numA * numB;
	}

	if (total == numX) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
}
