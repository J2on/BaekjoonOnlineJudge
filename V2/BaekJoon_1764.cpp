#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

/*
BaekJoon_1764 : 듣보잡
	듣도 못한 사람 명단 ∩ 보도 못한 사람 명단 = 듣도 보도 못한 사람 명단
*/

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int numN; // 듣도 못한
	int numM; // 보도 못한
	cin >> numN >> numM;

	map<string, string> unheard; // 듣도 못한 사람들을 map에 정리
	string input;
	for (int i = 0; i < numN; i++) {
		cin >> input;
		unheard[input] = "듣도 못한";
	}

	vector<string> neither_heard_nor_seen; // 듣보잡 벡터
	for (int i = 0; i < numM; i++) {
		cin >> input;
		if (unheard.find(input) != unheard.end()) {
			neither_heard_nor_seen.push_back(input);
		}
	}

	// 답이 사전순으로 정렬
	sort(neither_heard_nor_seen.begin(), neither_heard_nor_seen.end());

	cout << neither_heard_nor_seen.size() << "\n";
	for (string temp : neither_heard_nor_seen) {
		cout << temp << "\n";
	}


	return 0;
}
