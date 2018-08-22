#include <stdio.h>

// BaekJoon 2839¹ø ¹®Á¦

int main(void) {
	int nInput, tmp;

	scanf("%d", &nInput);
	
	switch (nInput % 10) {
	case 0:
	case 5:
		tmp = nInput / 5;
		break;
	case 3:
	case 8:
		if ((nInput - 3) % 5 != 0) {
			printf("-1");
			return 0;
		}
		else {
			tmp = (nInput - 3) / 5 + 1;
		}
		break;
	case 1:
	case 6:
		if ((nInput - 6) % 5 != 0) {
			printf("-1");
			return 0;
		}
		else {
			tmp = (nInput - 6) / 5 + 2;
		}
		break;
	case 4:
	case 9:
		if ((nInput - 9) % 5 != 0 || nInput - 9 < 0) {
			printf("-1");
			return 0;
		}
		else {
			tmp = (nInput - 9) / 5 + 3;
		}
		break;
	case 2:
	case 7:
		if ((nInput - 12) % 5 != 0 || nInput -12 < 0) {
			printf("-1");
			return 0;
		}
		else {
			tmp = (nInput - 12) / 5 + 4;
		}
		break;
	}
	printf("%d", tmp);

	return 0;
}