#include <stdio.h>
#include <string.h>

int main(void) {
	int nNum = 0, count = 0, length, sum;
	char nInput[80] = " ";

	scanf("%d", &nNum);

	for (int i = 0; i < nNum; i++) {

		scanf("%s", &nInput);
		length = strlen(nInput);

		count = 0, sum = 0;

		for (int j = 0; j < length; j++) {
			if ((nInput[j] == 'X')) {
				count = 0;
			}
			else {
				++count;
				sum += count;
			}
		}
		printf("%d\n", sum);
	}

	return 0;
}