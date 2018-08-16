#include <stdio.h>

//BaekJoon 10871번 문제 C버전

//입력을 받은 후 출력 (틀린 정답)
void FirstP() {
	int nInput, std, nNum, tmp[10001];

	scanf("%d %d", &nInput, &std);

	for (int i = 0; i < nInput; i++) {
		scanf("%d", &nNum);
		if (nNum < std) {
			tmp[i] = nNum;
		}
	}
	for (int i = 0; i < nInput; i++) {
		if (tmp[i] > 0) {
			printf("%d ", tmp[i]);
		}
	}
}

//입력을 받자마자 출력 (올바른 정답)
void SecondP() {
	int nInput, std, nNum;

	scanf("%d %d", &nInput, &std);

	for (int i = 0; i < nInput; i++) {
		scanf("%d", &nNum);
		if (nNum < std) {
			printf("%d ", nNum);
		}
	}
}

int main(void) {
	//FirstP();
	//SecondP();
}