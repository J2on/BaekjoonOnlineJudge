#include <stdio.h>

/*
  BaekJoon_17478 : 재귀함수가 뭔가요?
  input = 숫자 단 하나

*/
void makeUnderscore(int numCount){
  for (int i = 0; i < numCount; i++) {
		printf("%s", "____");
	}
}

void printStory(int numCount, int numInput) {
	// 첫 회차에만 출력
	if (numCount == 0) {
		printf(
			"%s",
			"어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.\n");
	}

	makeUnderscore(numCount);
	printf("%s", "\"재귀함수가 뭔가요?\"\n");

	if (numInput == numCount) {
		makeUnderscore(numCount);
		printf("%s", "\"재귀함수는 자기 자신을 호출하는 함수라네\"\n");
		return;
	}

	makeUnderscore(numCount);
	printf(
		"%s",
		"\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 "
		"선인이 있었어.\n");
	makeUnderscore(numCount);
	printf(
		"%s",
		"마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 "
		"대답해 주었지.\n");
	makeUnderscore(numCount);
	printf(
		"%s",
		"그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 "
		"찾아와서 물었어.\"\n");

	numCount++;
	printStory(numCount, numInput);

	makeUnderscore(numCount);
	printf("%s", "라고 답변하였지.\n");

	if (numCount == 1) {
		printf("%s", "라고 답변하였지.\n");
	}
}

int main() {
	int numInput;
	scanf("%d", &numInput);
	int numCount = 0;
	printStory(numCount, numInput);
}