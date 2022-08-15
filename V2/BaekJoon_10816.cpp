#include <iostream>
using namespace std;

/*
BaekJoon_10816 : 숫자 카드 2
	상근 - 숫자 카드 n개 보유
	정수 M개가 주어졌을때, M개의 카드를 상근이가 각각 몇개를 보유하고 있는지 구하는 문제
	1<= n, m <=500,000
	카드에 적힌 수 -10,000,000 ~ 10,000,000 
*/

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int numN;
	int numM;
	int* arrN = new int [20000001](); // -10,000,000 ~ 10,000,000을 0 ~ 20,000,000 으로 생각
	
	
	cin >> numN;
	int input;
	for (int i = 0; i < numN; i++) {
		cin >> input;
		arrN[input + 10000000]++;
	}

	cin >> numM;
	for (int i = 0; i < numM; i++) {
		cin >> input;
		cout << arrN[input + 10000000] << " ";
	}

	delete[] arrN;
	return 0;
}
