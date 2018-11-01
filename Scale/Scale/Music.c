#include <stdio.h>

//BAEKJOON 2920¹ø ¹®Á¦
int main(void)
{
	int nInput[8];
	int cot = 0, con = 0, j = 8;
	for (int i = 0; i < 8; i++)
	{
		scanf("%d", &nInput[i]);
	}
	for (int i = 0; i < 8; i++)
	{
		if (nInput[i] == i + 1)
			cot++;
		else if (nInput[i] == j)
			con++;
		else
			break;
		j--;
	}
	if (cot == 8)
		printf("ascending");
	else if (con == 8)
		printf("descending");
	else
		printf("mixed");

	return 0;
}