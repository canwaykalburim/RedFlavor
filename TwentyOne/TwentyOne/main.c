#include "common.h"

int money = 5000000;

void menuInput();
int main();

/*
void check(int n, int m)
{

}

void nCheck() 
{

}
*/

/*
int gameSave(int money)
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
*/

void gameModeOne()
{

}

int gameInput(int betting)
{
	printf("\n 게임을 시작하겠습니다");
	_getch();
	system("cls");

	printf("\n 총 자산: %d원", money);
	printf("\n 거실 금액을 입력해 주세요\n\n 금액 》 ");

	scanf("%d", &betting);

	system("cls");

	return betting;
}

int gameModeTwo()
{
	srand((unsigned)time(NULL));

	int nCard = 0;
	int betting = 0, nextAct = 0;
	int dealer[10] = { 0 }, dealerCard = 0;
	int player[10] = { 0 }, playerCard = 0;

	/*
	FILE *money = fopen("C:\\Users\\legen\\Desktop\\소스코드\\RedFlavor\\TwentyOne\\save\\save.txt", "r");
	fclose(money);
	*/

	gameInput(betting);

	dealer[1] = rand() % 14 + 1;
	dealer[2] = rand() % 14 + 1;
	player[1] = rand() % 14 + 1;
	player[2] = rand() % 14 + 1;

	while (dealer[1] == dealer[2] || player[1] == player[2] || dealer[1] == player[1] || 
		dealer[1] == player[2] || dealer[2] == player[2] || dealer[2] == player[1])
	{
		if (dealer[1] == dealer[2])
			dealer[2] = rand() % 14 + 1;
		if (player[1] == player[2])
			player[2] = rand() % 14 + 1;
		if (dealer[1] == player[1])
			dealer[1] = rand() % 14 + 1;
		if (dealer[2] == player[2])
			dealer[2] = rand() % 14 + 1;
		if (dealer[1] == player[2])
			dealer[1] = rand() % 14 + 1;
		if (dealer[2] == player[1])
			player[1] = rand() % 14 + 1;
	}

	if (player[1] > 10)
		player[1] = 10;
	if (player[2] > 10)
		player[2] = 10;
	if (dealer[1] > 10)
		dealer[1] = 10;
	if (dealer[2] > 10)
		dealer[2] = 10;

	if (player[1] == 1 || player[2] == 1)
	{
		printf("\n 플레이어가 A 카드가 나왔습니다 1점과 11점 중 원하시는 점수를 고르십시오\n");
		printf(" 현재 당신의 카드: %d : %d\n\n》 ", player[1], player[2]);

		scanf("%d", &nCard);

		if (player[1] == 1)
		{
			switch (nCard)
			{
			case 1:
				player[1] = 1;
				break;
			case 11:
				player[1] = 11;
				break;
			default:
				printf("\n 잘못된 값입니다\n11로 처리하겠습니다\n");
				break;
			}
		}
		else
		{
			switch (nCard)
			{
			case 1:
				player[2] = 1;
				break;
			case 11:
				player[2] = 11;
				break;
			default:
				printf("\n 잘못된 값입니다\n11로 처리하겠습니다\n");
				break;
			}
		}
		system("cls");
	}

	if (dealer[1] == 1 || dealer[2] == 1)
	{
		if (dealer[1] == 1)
			dealer[1] = 11;
		if (dealer[2] == 1)
			dealer[2] = 11;
	}

	dealerCard = dealer[1] + dealer[2];
	playerCard = player[1] + player[2];

	if (playerCard == 21)
	{
		printf(" 블랙잭입니다 플레이어의 승리입니다");
		money = (int)(betting * 2.5);
		_getch();
		system("cls");
		menuInput();
	}

	printf(" 딜러의 카드: %d : %d\t합: %d\n", dealer[1], dealer[2], dealerCard);
	printf(" 당신의 카드: %d : %d\t합: %d\n", player[1], player[2], playerCard);
	_getch();

	if (playerCard > 21)
	{
		printf(" 플레이어의 카드의 합이 21을 넘었으므로 플레이어의 패배입니다");
		money -= betting;
		_getch();
	}
	else if (dealerCard > 21)
	{
		printf(" 딜러의 카드의 합이 21이 넘었으므로 플레이어의 승리입니다");
		_getch();
		money += betting;
	}
	_getch();

	printf("\n 다음 행동을 골라주십시오\n\n");
	printf(" 1. 히트(Hit)\n 2. 스탠드(stand)\n 3. 더블 다운(double down)\n 4. 서랜더(surrender)\n\n 》");

	scanf("%d", &nextAct);

	switch (nextAct)
	{
	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	default:
		break;
	}
	return 0;
}

void selectGame()
{
	int userInput;

	system("cls");

	printf("\n 원하시는 게임 모드를 선택해 주십시오\n\n");
	printf(" 1. 일반 모드\n 2. 특별 모드\n\n 》");
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
	int choice;
	system("cls");
	printf("무엇에 대한 설명을 듣겠습니까?\n\n1. 일반 모드\n2. 특별 모드\n\n》");
	scanf("%d", &choice);
	main();
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
		break;
	case 2:
		gameExplain();
		break;
	case 3:
		gameRule();
		break;
	case 4:
		//gameSave();
		break;
	case 5:
		exit(1);
		break;
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