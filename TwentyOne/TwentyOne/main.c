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
	printf("\n ������ �����ϰڽ��ϴ�");
	_getch();
	system("cls");

	printf("\n �� �ڻ�: %d��", money);
	printf("\n �Ž� �ݾ��� �Է��� �ּ���\n\n �ݾ� �� ");

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
	FILE *money = fopen("C:\\Users\\legen\\Desktop\\�ҽ��ڵ�\\RedFlavor\\TwentyOne\\save\\save.txt", "r");
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
		printf("\n �÷��̾ A ī�尡 ���Խ��ϴ� 1���� 11�� �� ���Ͻô� ������ ���ʽÿ�\n");
		printf(" ���� ����� ī��: %d : %d\n\n�� ", player[1], player[2]);

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
				printf("\n �߸��� ���Դϴ�\n11�� ó���ϰڽ��ϴ�\n");
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
				printf("\n �߸��� ���Դϴ�\n11�� ó���ϰڽ��ϴ�\n");
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
		printf(" �����Դϴ� �÷��̾��� �¸��Դϴ�");
		money = (int)(betting * 2.5);
		_getch();
		system("cls");
		menuInput();
	}

	printf(" ������ ī��: %d : %d\t��: %d\n", dealer[1], dealer[2], dealerCard);
	printf(" ����� ī��: %d : %d\t��: %d\n", player[1], player[2], playerCard);
	_getch();

	if (playerCard > 21)
	{
		printf(" �÷��̾��� ī���� ���� 21�� �Ѿ����Ƿ� �÷��̾��� �й��Դϴ�");
		money -= betting;
		_getch();
	}
	else if (dealerCard > 21)
	{
		printf(" ������ ī���� ���� 21�� �Ѿ����Ƿ� �÷��̾��� �¸��Դϴ�");
		_getch();
		money += betting;
	}
	_getch();

	printf("\n ���� �ൿ�� ����ֽʽÿ�\n\n");
	printf(" 1. ��Ʈ(Hit)\n 2. ���ĵ�(stand)\n 3. ���� �ٿ�(double down)\n 4. ������(surrender)\n\n ��");

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

	printf("\n ���Ͻô� ���� ��带 ������ �ֽʽÿ�\n\n");
	printf(" 1. �Ϲ� ���\n 2. Ư�� ���\n\n ��");
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
	printf("������ ���� ������ ��ڽ��ϱ�?\n\n1. �Ϲ� ���\n2. Ư�� ���\n\n��");
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
		printf("�ùٸ� ���� �Է��ϼ���");
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