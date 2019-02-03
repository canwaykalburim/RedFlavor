#include "common.h"

#define CARD_NUMBER 13

void menuInput();

void gameSave()
{

}

void startGame()
{
	printf("게임을 시작하겠습니다");
	_getch();

	srand((unsigned)time(NULL));

	int nCard[CARD_NUMBER] = { 0 };

	while (1)
	{
		int dealer = rand() % 14;
		int player = rand() % 14;

		printf("딜러의 패: %c");
		printf("당신의 패: ");
	}
}

void gameExplain()
{

}

void gameRule()
{

}

void menu(int num)
{
	switch (num)
	{
	case 1:
		startGame();
	case 2:
		gameExplain();
	case 3:
		gameRule();
	case 4:
		gameSave();
	case 5:
		exit(1);
	default:
		system("cls");
		printf("올바른 값을 입력하세요");
		_getch();
		input();
		break;
	}
}

void menuInput()
{
	int userInput;

	system("cls");
	showScreen();

	scanf("%d", &userInput);

	menu(userInput);
}

int main(void)
{
	menuInput();

	return 0;
}