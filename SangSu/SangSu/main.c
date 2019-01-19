#include <stdio.h>

// BAEKJOON 2908¹ø ¹®Á¦

int main(void)
{
	int num1, num2, tmp1, tmp2;

	scanf("%d %d", &num1, &num2);

	tmp1 = num1 / 100 + ((num1 / 10 - (num1 / 100) * 10) * 10) + ((num1 % 10) * 100);
	tmp2 = num2 / 100 + ((num2 / 10 - (num2 / 100) * 10) * 10) + ((num2 % 10) * 100);

	if (tmp1 < tmp2)
		printf("%d", tmp2);
	else if (tmp1 > tmp2)
		printf("%d", tmp1);
	else
		printf("%d", tmp1);
	return 0;
}