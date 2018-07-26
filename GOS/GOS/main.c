#include <stdio.h>

int main(void) {
	int nTime, nScore, sum = 0;

	scanf("%d %d", &nTime, &nScore);

	while (nTime < 90) {
		++nScore;
		sum = nTime + 5;
		nTime = 0;
		nTime = sum;
	}
	printf("%d", nScore);
}