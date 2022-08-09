#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
BaekJoon_25305 : 커트라인
 n명의 학생이 응시, 상위 k명이 수상, 커트라인을 구하라 (커트라인 == 상 받은 사람 중 꼴지)
 
 1<= n <= 1000
 1<= k <= n
 1<= x(학생의 점수) <= 10,000
*/

int main() {
	int numN; // Num of students 
	int numK; // Num of winners
	int numX; // score of student
	cin >> numN >> numK;

	vector<int> vecX; // vec of students' scores

	for (int i = 0; i < numN; i++) {
		int temp;
		cin >> temp;
		vecX.push_back(temp);
	}
	sort(vecX.rbegin(), vecX.rend()); // sorting	

	cout << vecX[numK-1];
}
