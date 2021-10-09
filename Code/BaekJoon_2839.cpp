#include <iostream>

using namespace std;

/*
 이걸 어떻게 풀어야할까
 input을 n이라 하면
 n/5 몫을 찾아내서 0~몫 까지 하나씩 올려가며 5봉지 1개일때 3봉지 몇개인지 구하는게 나을듯
*/

int howManyPTBags(const int& sugar){
	int kgFive = sugar / 5;
	int numOfBags[kgFive+1];
	
	int temp;
	for (int i = 0; i <= kgFive; i++) {
		temp = sugar - (5 * i);
		for (int kgThree = 0; temp >= kgThree * 3; kgThree++ ){
			if (temp - kgThree * 3 == 0){
				numOfBags[i] = i + kgThree;
			}
			else {
				numOfBags[i] = -1; 
			}
		}
	}
	
	int min = numOfBags[0];
	for (int i = 1; i <= kgFive; i++){
		if (min == -1 && numOfBags[i] != -1){
			min = numOfBags[i];
		}
		else if (numOfBags[i] != -1 && numOfBags[i] < min){ 
			min = numOfBags[i];
		}
	}
	
	return min;
}


int main() {
	int sugar;
	cin >> sugar;
	cout << howManyPTBags(sugar);
	
}