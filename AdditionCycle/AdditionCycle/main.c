#include <stdio.h>

//BaekJoon 1110 ¹®Á¦

int main(void) {
	int nNum, mNum, FTmp, STmp, sum;
	int cot = 0;

	scanf("%d", &nNum);

	mNum = nNum;
	while (mNum != nNum || cot == 0) {
		FTmp = mNum / 10;
		STmp = mNum % 10;
		sum = (FTmp + STmp) % 10;
		FTmp = STmp;
		STmp = sum;
		mNum = FTmp * 10 + STmp;
		cot++;
	}
	printf("%d\n", cot);

	return 0;
}