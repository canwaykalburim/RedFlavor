#include <stdio.h>

// BaekJoon 6064문제 시간 초과

int main(void) {
	int nNum, N, M, x, y;
	int nCkeck = 0;

	scanf("%d", &nNum);

	for (int i = 0; i < nNum; i++) {
		scanf("%d %d %d %d", &M, &N, &x, &y);
		int ax = 1, ay = 1, count = 1;

		while (1) {
			if (ax == x && ay == y) {
				nCkeck++;
				break;
			}
			else {
				count++;
			}
			if (M == ax && N == ay) {
				break;
			}
			if (ax > M) {
				ax = 1;
			}
			if (ay > N) {
				ay = 1;
			}
			ax++, ay++;
		}
		if (nCkeck == 0) {
			printf("-1");
		}
		else
			printf("%d", count);
	}
	return 0;
}