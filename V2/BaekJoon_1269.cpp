#include <iostream>
using namespace std;

/*
BaekJoon_1269 : 대칭 차집합
	두 집합 A, B
	(A-B) 개수 + (B-A) 개수 구하기
	둘의 공집합을 A,B에 각각 빼주는것과 같고

*/

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int numA, numB;
	cin >> numA >> numB;


	int* arrA = new int[100000001]();
	int* arrB = new int[100000001]();
	int input;
	for (int i = 0; i < numA; i++) {
		cin >> input;
		arrA[input]++;
	}
	for (int i = 0; i < numB; i++) {
		cin >> input;
		arrB[input]++;
	}

	int result = 0;
	for (int i = 0; i < 100000001; i++) {
		if (arrA[i] == 1 && arrB[i] == 1) {
			continue;
		}
		else if (arrA[i] == 0 && arrB[i] == 0) {
			continue;
		}
		else {
			result++;
		}
	}
	
	cout << result;
	return 0;
}
