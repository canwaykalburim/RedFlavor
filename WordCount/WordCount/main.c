#include <stdio.h>

//Baekjoon 1152�� ����

int main(void) {
	char nInput[1000002];
	int count = 0;

	while (scanf("%s", nInput) == 1) {
		count++;
	}
	printf("%d", count);

	return 0;
}