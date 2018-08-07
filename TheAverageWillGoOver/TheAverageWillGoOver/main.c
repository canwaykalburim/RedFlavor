#include <stdio.h>

int main(void) {
	double nNum, mNum, sum, cont;
	double nInput[1001];

	scanf("%lf", &nNum);

	for (int i = 0; i < nNum; i++) {
		cont = 0, sum = 0;

		scanf("%lf", &mNum);

		for (int j = 0; j < mNum; j++) {
			scanf("%lf", &nInput[j]);
			sum += nInput[j];
		}
		for (int j = 0; j < mNum; j++) {
			if ((sum / mNum) < nInput[j]) {
				cont++;
			}
		}
		printf("%.3f%%\n", ((cont * 100) / mNum));
	}

	return 0;
}