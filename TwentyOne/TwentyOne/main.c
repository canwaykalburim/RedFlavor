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
	printf("\n������ �����ϰڽ��ϴ�");
	_getch();
	system("cls");

	srand((unsigned)time(NULL));

	int nCard = 0;
	int dealer[2] = { 0 }, dealerCard = 0;
	int player[2] = { 0 }, playerCard = 0;
	int i = 0, betting = 0;

	printf("�Ž� �ݾ��� �Է��� �ּ���\n�ݾ� �� ");
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
		printf("\n�÷��̾ A ī�尡 ���Խ��ϴ� 1���� 11�� �� ���Ͻô� ������ ���ʽÿ�\n");
		printf("���� ����� ī��: %d : %d\n\n�� ", player[i], player[i + 1]);

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
				printf("\n�߸��� ���Դϴ�\n11�� ó���ϰڽ��ϴ�\n");
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
				printf("\n�߸��� ���Դϴ�\n11�� ó���ϰڽ��ϴ�\n");
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
		printf("�����Դϴ� �÷��̾��� �¸��Դϴ�");
		money = betting * 2.5;
		system("cls");
		menuInput();
	}

	printf("������ ī��: %d : %d\t��: %d\n", dealer[i], dealer[i + 1], dealerCard);
	printf("����� ī��: %d : %d\t��: %d\n", player[i], player[i + 1], playerCard);
	_getch();

	printf("\n���� �ൿ�� ����ֽʽÿ�\n\n");
	printf("1. ��Ʈ(Hit)\n2. ���ĵ�(stand)\n3. ���� �ٿ�(double down)\n4. ������(surrender)\n");


	if (playerCard > 21)
	{
		printf("�÷��̾��� ī���� ���� 21�� �Ѿ����Ƿ� �÷��̾��� �й��Դϴ�");
		money -= betting;
		_getch();
	}
	else if (dealerCard > 21)
	{
		printf("������ ī���� ���� 21�� �Ѿ����Ƿ� �÷��̾��� �¸��Դϴ�");
		_getch();
		money += betting;
	}
}

void selectGame()
{
	int userInput;

	system("cls");

	printf("���Ͻô� ���� ��带 ������ �ֽʽÿ�");
	printf("1. �Ϲ� ���\n2. Ư�� ���");
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