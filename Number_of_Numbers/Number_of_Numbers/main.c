#include <stdio.h>

int main(void)
{
	int nInput, tmp[10] = { 0 };
	int Mult = 1;
	
	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &nInput);
		Mult *= nInput;
	}
	while (Mult != 0)
	{
		tmp[Mult % 10] += 1;
		Mult /= 10;
	}
	for (int i = 0; i < 10; i++) 
	{
		printf("%d\n", tmp[i]);
	}
	return 0;
}