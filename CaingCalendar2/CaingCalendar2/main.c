#include <stdio.h>

//BaekJoon 6064번 문제 C 버전

int LCM(int M, int N) {
	int a = M, b = N, tmp;
	while (b) {
		tmp = a;
		a = b;
		b = tmp % b;
	}
	return (M * N) / a;
}

int main(void) {
	int M, N, x, y, tmp;
	scanf("%d", &tmp);

	for (int i = 0; i < tmp; i++) {
		scanf("%d %d %d %d", &M, &N, &x, &y);
		int LcmNum = LCM(M, N);
		while (x != y && x <= LcmNum) {
			if (x < y) x += M;
			else y += N;
		}
		if (x != y) {
			printf("-1\n");
		}
		else {
			printf("%d\n", x);
		}
	}
	return 0;
}