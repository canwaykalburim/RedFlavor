#include <stdio.h>

//Baekjoon 11719¹ø

int main(void) {
	char nInput[100];

	while (gets_s(nInput, (sizeof nInput)) == nInput) {
		puts(nInput);
	}

	return 0;
}