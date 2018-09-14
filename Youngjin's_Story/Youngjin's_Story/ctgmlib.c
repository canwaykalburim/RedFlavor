#include "common.h"
#include "ctgmlib.h"

void SetColor(int n) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), n);
	return;
}

void MessagePrint(char *character, int charColor, const char *format, ...) {
	va_list arg;
	int count;
	system("cls");
	printf("\n\n  ");
	if (!strcmp(character, "NULL")) SetColor(15);
	else {
		SetColor(15);		 printf("[");
		SetColor(charColor); printf("%s", character);
		SetColor(15);	     printf("]\n\n  ");
	}
	va_start(arg, format);
	count = vprintf(format, arg);
	va_end(arg);
	_getch();

	return;
}