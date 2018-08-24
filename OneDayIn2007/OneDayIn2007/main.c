#include <stdio.h>

//Baekjoon 1924¹ø ¹®Á¦

int main(void) {
	int Mon, Day;

	scanf("%d %d", &Mon, &Day);

	int month[12] = { 31, 28, 31, 30, 31, 30, 31,  31,30, 31, 30, 31 };
	int MD = 0;
	int Date = 0;

	for (int i = 0; i < Mon - 1; i++)
	{
		MD = MD + month[i];
	}

	MD += +(Day - 1);
	Date = MD % 7;

	switch (Date)
	{
	case 0:
		printf("MON");
		break;
	case 1:
		printf("TUE");
		break;
	case 2:
		printf("WED");
		break;
	case 3:
		printf("THU");
		break;
	case 4:
		printf("FRI");
		break;
	case 5:
		printf("SAT");
		break;
	case 6:
		printf("SUN");
		break;
	}

	return 0;
}