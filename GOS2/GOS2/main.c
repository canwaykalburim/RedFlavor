#include <stdio.h>

int main(void) {
	int nTime, nScore, mScore, sum = 0;

	scanf("%d %d %d", &nTime, &nScore, &mScore);

	while (nTime < 90) {
		++nScore;
		sum = nTime + 5;
		nTime = 0;
		nTime = sum;
	}

	if (nScore > mScore) {
		printf("win");
	}
	else if (nScore < mScore) {
		printf("lose");
	}
	else
		printf("same");

	return 0;
}