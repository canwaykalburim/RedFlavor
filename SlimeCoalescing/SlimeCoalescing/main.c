#include <stdio.h>

//Baekjoon 14241¹ø ¹®Á¦

int main(void) {
	int nInput, Slime, sum = 0, score = 0;

	scanf("%d", &nInput);
	for (int i = 0; i < nInput; i++) {
		Slime = 0;
		scanf("%d", &Slime);
		score += (sum * Slime);
		sum += Slime;
	}
	printf("%d", score);
	return 0;
}