#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/* BaekJoon1269: 대칭차집합
*/

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int numA, numB;
	cin >> numA >> numB;

	vector<int> vec(numA + numB, 0); // 한 벡터에 같이 저장
	for (int i = 0; i < numA + numB; i++) { cin >> vec[i]; }
	
	// A집합과 B집합의 중복된 값을 제거
	sort(vec.begin(), vec.end());
	vec.erase(unique(vec.begin(), vec.end()), vec.end()); 
	

	// numA + numB - vec.size() 는 결국 중복된 원소의 개수를 나타낸다.
	// 따라서 총 원소의 개수(numA + numB) 에서 중복된 원소의 개수*2 만큼 빼주면 정답 
	int result = numA + numB - (numA + numB - vec.size()) * 2;
	cout << result;
}
