#include <stdio.h>

//	Baekjoon 11720번 문제

void SumOfNumber() {
	int nNum, nInput, sum = 0;

	scanf("%d", &nNum);

	for (int i = 0; i < nNum; i++) {
		scanf("%1d", &nInput);

		sum += nInput;
	}
	printf("%d", sum);

	return 0;
}

//	Baekjoon 15552번 문제

void FastPlusC() {
	int nNum, nInput, mInput;

	scanf("%d", &nNum);

	for (int i = 0; i < nNum; i++) {
		scanf("%d %d", &nInput, &mInput);

		printf("%d\n", nInput + mInput);
	}

	return 0;
}

int main(void) {
	SumOfNumber();
	FastPlusC();
	FastPlusCPP();
}
