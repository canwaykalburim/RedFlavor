#include "common.h"

#define CARD_NUMBER 12

void menuInput();

void gameSave()
{

}

void startGame()
{

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
		printf("�ùٸ� ���� �Է��ϼ���");
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