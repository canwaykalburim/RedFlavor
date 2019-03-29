#include "common.h"

float money = 500000;
void menuInput();

/*
void check(int n, int m)
{

}

void nCheck() 
{

}
*/

void gameSave()
{
	int gameData;

	FILE *fp = fopen("save.txt", "a");

	if (fp == NULL)
		return 0;

	gameData = money;
	fprintf(fp, "%d", gameData);


	fclose(fp);

	return 0;
}

void gameModeOne()
{

}

void gameModeTwo()
{
	printf("\n게임을 시작하겠습니다");
	_getch();
	system("cls");

	srand((unsigned)time(NULL));

	int nCard = 0;
	int dealer[2] = { 0 }, dealerCard = 0;
	int player[2] = { 0 }, playerCard = 0;
	int i = 0, betting = 0;

	printf("거실 금액을 입력해 주세요\n금액 》 ");
	scanf("%d", &betting);

	dealer[i] = rand() % 14;
	dealer[i + 1] = rand() % 14;
	player[i] = rand() % 14;
	player[i + 1] = rand() % 14;

	if (dealer[i] == 0)
		dealer[i] = rand() % 14;
	if (player[i] == 0)
		player[i] = rand() % 14;
	if (dealer[i + 1] == 0)
		dealer[i + 1] = rand() % 14;
	if (player[i + 1] == 0)
		player[i + 1] = rand() % 14;

	while (dealer[i] == dealer[i - 1] || player[i] == player[i - 1])
	{
		if (dealer[i] == dealer[i - 1])
			dealer[i + 1] = rand() % 14;
		if (player[i] == player[i - 1])
			player[i + 1] = rand() % 14;
		if (dealer[i] == player[i])
			dealer[i] = rand() % 14;
		if (dealer[i + 1] == player[i + 1])
			dealer[i + 1] = rand() % 14;
	}

	if (player[i] > 10)
		player[i] = 10;
	if (player[i + 1] > 10)
		player[i] = 10;
	if (dealer[i] > 10)
		dealer[i] = 10;
	if (dealer[i + 1] > 10)
		dealer[i + 1] = 10;

	if (player[i] == 1 || player[i + 1] == 1)
	{
		printf("\n플레이어가 A 카드가 나왔습니다 1점과 11점 중 원하시는 점수를 고르십시오\n");
		printf("현재 당신의 카드: %d : %d\n\n》 ", player[i], player[i + 1]);

		scanf("%d", &nCard);

		if (player[i] == 1)
		{
			switch (nCard)
			{
			case 1:
				player[i] = 1;
				break;
			case 11:
				player[i] = 11;
				break;
			default:
				printf("\n잘못된 값입니다\n11로 처리하겠습니다\n");
				break;
			}
		}
		else
		{
			switch (nCard)
			{
			case 1:
				player[i + 1] = 1;
				break;
			case 11:
				player[i + 1] = 11;
				break;
			default:
				printf("\n잘못된 값입니다\n11로 처리하겠습니다\n");
				break;
			}
		}
		system("cls");
	}

	if (dealer[i] == 1 || dealer[i + 1] == 1)
	{
		if (dealer[i] == 1)
			dealer[i] = 11;
		if (dealer[i + 1] == 1)
			dealer[i + 1] = 11;
	}

	dealerCard = dealer[i] + dealer[i + 1];
	playerCard = player[i] + player[i + 1];

	if (playerCard == 21)
	{
		printf("블랙잭입니다 플레이어의 승리입니다");
		money = betting * 2.5;
		system("cls");
		menuInput();
	}

	printf("딜러의 카드: %d : %d\t합: %d\n", dealer[i], dealer[i + 1], dealerCard);
	printf("당신의 카드: %d : %d\t합: %d\n", player[i], player[i + 1], playerCard);
	_getch();

	printf("\n다음 행동을 골라주십시오\n\n");
	printf("1. 히트(Hit)\n2. 스탠드(stand)\n3. 더블 다운(double down)\n4. 서랜더(surrender)\n");


	if (playerCard > 21)
	{
		printf("플레이어의 카드의 합이 21을 넘었으므로 플레이어의 패배입니다");
		money -= betting;
		_getch();
	}
	else if (dealerCard > 21)
	{
		printf("딜러의 카드의 합이 21이 넘었으므로 플레이어의 승리입니다");
		_getch();
		money += betting;
	}
}

void selectGame()
{
	int userInput;

	system("cls");

	printf("원하시는 게임 모드를 선택해 주십시오");
	printf("1. 일반 모드\n2. 특별 모드");
	scanf("%d", &userInput);

	switch (userInput)
	{
	case 1:
		gameModeOne();
		break;
	case 2:
		gameModeTwo();
		break;
	default:
		break;
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
		selectGame();
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
		menuInput();
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