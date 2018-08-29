#include <stdio.h>

int main(void) {
	int xNum, yNum, zNum;
	int temp;

	scanf("%d %d %d", &xNum, &yNum, &zNum);

	if (yNum > xNum && yNum > zNum) {
		temp = xNum;
		xNum = yNum;
		yNum = temp;
	}
	else if (zNum > xNum && zNum > yNum) {
		temp = xNum;
		xNum = zNum;
		zNum = temp;
	}

	if (xNum < yNum + zNum) {
		printf("yes");
	}
	else if ((xNum * xNum) == (yNum * yNum) + (zNum * zNum)) {
		printf("yes");
	}
	else
		printf("no");
}