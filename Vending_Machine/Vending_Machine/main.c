#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
#define SIZE 80

int money[SIZE];

void Plus();
void menu();
int Exit();

int coke[SIZE] = { 10 };
int sprite[SIZE] = { 10 };
int fanta[SIZE] = { 10 };
int hamberger[SIZE] = { 10 };
int sausage[SIZE] = { 10 };


void Coke()
{
	int nCoke = 700, nInput;

	system("cls");

	printf("���� �ݾ�: %d\n\n", money[0]);

	if (money[0] < nCoke)
	{
		printf("���� �� �����Ͽ� �ֽʽÿ�\n\n");
		printf("1. ���� �� �����Ѵ�.\n");
		printf("2. �ٸ� �޴��� ����.\n");
		printf("3. �ý����� �����Ѵ�.\n\n�� ");

		while (1)
		{
			scanf("%d", &nInput);

			if (nInput == 1)
			{
				system("cls");
				Plus();
				break;
			}
			else if (nInput == 2)
			{
				system("cls");
				menu();
				break;
			}
			else if (nInput == 3)
			{
				Exit();
				break;
			}
			else
				printf("�ٽ� �����Ͽ� �ֽʽÿ�.\n\n�� ");
		}
	}
	else
	{
		system("cls");
		money[0] -= 700;
		if (coke[0] == 0)
		{
			system("cls");
			printf("��� �����մϴ�.\n");
			_getch();
			_getch();
			menu();
		}
		else
		{
		coke[0] -= 1;
		printf("���� �ݾ�: %d\n\n", money[0]);
		printf("���Ͻô� ���ᰡ ���Խ��ϴ�.");
		_getch();
		_getch();
		menu();
		}
	}
}

void Sprite()
{
	int nSprite = 700, nInput;

	system("cls");

	printf("���� �ݾ�: %d\n\n", money[0]);

	if (money[0] < nSprite)
	{
		printf("���� �� �����Ͽ� �ֽʽÿ�\n\n");
		printf("1. ���� �� �����Ѵ�.\n");
		printf("2. �ٸ� �޴��� ����.\n");
		printf("3. �ý����� �����Ѵ�.\n\n�� ");

		while (1)
		{
			scanf("%d", &nInput);

			if (nInput == 1)
			{
				system("cls");
				Plus();
				break;
			}
			else if (nInput == 2)
			{
				system("cls");
				menu();
				break;
			}
			else if (nInput == 3)
			{
				Exit();
				break;
			}
			else
				printf("�ٽ� �����Ͽ� �ֽʽÿ�.\n\n�� ");
		}
	}
	else
	{
		system("cls");
		money[0] -= 700;
		if (sprite[0] == 0)
		{
			system("cls");
			printf("��� �����մϴ�.\n");
			_getch();
			_getch();
			menu();
		}
		else
		{
			sprite[0] -= 1;
			printf("���� �ݾ�: %d\n\n", money[0]);
			printf("���Ͻô� ���ᰡ ���Խ��ϴ�.");
			_getch();
			_getch();
			menu();
		}
	}
}

void Fanta()
{
	int nFanta = 700, nInput;

	system("cls");

	printf("���� �ݾ�: %d\n\n", money[0]);

	if (money[0] < nFanta)
	{
		printf("���� �� �����Ͽ� �ֽʽÿ�\n\n");
		printf("1. ���� �� �����Ѵ�.\n");
		printf("2. �ٸ� �޴��� ����.\n");
		printf("3. �ý����� �����Ѵ�.\n\n�� ");

		while (1)
		{
			scanf("%d", &nInput);

			if (nInput == 1)
			{
				system("cls");
				Plus();
				break;
			}
			else if (nInput == 2)
			{
				system("cls");
				menu();
				break;
			}
			else if (nInput == 3)
			{
				Exit();
				break;
			}
			else
				printf("�ٽ� �����Ͽ� �ֽʽÿ�.\n\n�� ");
		}
	}
	else
	{
		system("cls");
		money[0] -= 700;
		fanta[0] -= 1;
		printf("���� �ݾ�: %d\n\n", money[0]);
		printf("���Ͻô� ���ᰡ ���Խ��ϴ�.");
		_getch();
		_getch();
		menu();
	}
}

void Hamberger()
{
	int nHamberger = 1500, nInput;

	system("cls");

	printf("���� �ݾ�: %d\n\n", money[0]);

	if (money[0] < nHamberger)
	{
		printf("���� �� �����Ͽ� �ֽʽÿ�\n\n");
		printf("1. ���� �� �����Ѵ�.\n");
		printf("2. �ٸ� �޴��� ����.\n");
		printf("3. �ý����� �����Ѵ�.\n\n�� ");

		while (1)
		{
			scanf("%d", &nInput);

			if (nInput == 1)
			{
				system("cls");
				Plus();
				break;
			}
			else if (nInput == 2)
			{
				system("cls");
				menu();
				break;
			}
			else if (nInput == 3)
			{
				Exit();
				break;
			}
			else
				printf("�ٽ� �����Ͽ� �ֽʽÿ�.\n\n�� ");
		}
	}
	else
	{
		system("cls");
		money[0] -= 1500;
		if (hamberger[0] == 0)
		{
			system("cls");
			printf("��� �����մϴ�.\n");
			_getch();
			_getch();
			menu();
		}
		else
		{
			hamberger[0] -= 1;
			printf("���� �ݾ�: %d\n\n", money[0]);
			printf("���Ͻô� ������ ���Խ��ϴ�.");
			_getch();
			_getch();
			menu();
		}
	}
}

void Sausage()
{
	int nSausage = 1000, nInput;

	system("cls");

	printf("���� �ݾ�: %d\n\n", money[0]);

	if (money[0] < nSausage)
	{
		printf("���� �� �����Ͽ� �ֽʽÿ�\n\n");
		printf("1. ���� �� �����Ѵ�.\n");
		printf("2. �ٸ� �޴��� ����.\n");
		printf("3. �ý����� �����Ѵ�.\n\n�� ");

		while (1)
		{
			scanf("%d", &nInput);

			if (nInput == 1)
			{
				system("cls");
				Plus();
				break;
			}
			else if (nInput == 2)
			{
				system("cls");
				menu();
				break;
			}
			else if (nInput == 3)
			{
				Exit();
				break;
			}
			else
				printf("�ٽ� �����Ͽ� �ֽʽÿ�.\n\n�� ");
		}
	}
	else
	{
		system("cls");
		money[0] -= 1000;
		if (sausage[0] == 0)
		{
			system("cls");
			printf("��� �����մϴ�.\n");
			_getch();
			_getch();
			menu();
		}
		else
		{
			sausage[0] -= 1;
			printf("���� �ݾ�: %d\n\n", money[0]);
			printf("���Ͻô� ������ ���Խ��ϴ�.");
			_getch();
			_getch();
			menu();
		}
	}
}

int Exit()
{
	system("cls");
	printf("�ý����� �����մϴ�.\n\n");
	return 0;
}

void Plus()
{
	int P_money[SIZE];

	system("cls");
	printf("�󸶸� �߰��Ͻðڽ��ϱ�?\n\n�� ");
	scanf("%d", &P_money[0]);

	if (P_money[0] > 0)
	{
		money[0] += P_money[0];
	}
	else
	{
		Plus();
	}
	menu();
}

void menu()
{
	int number;

	system("cls");

	printf("���� �ݾ�: %d\n\n", money[0]);
	printf("�޴��� �����ϼ���.\n\n");
	printf("1. �ݶ� \t 700��\t %d��\n", coke[0]);
	printf("2. ���̴� \t 700��\t %d��\n", sprite[0]);
	printf("3. ȯŸ \t 700��\t %d��\n", fanta[0]);
	printf("4. �ܹ��� \t 1500��\t %d��\n", hamberger[0]);
	printf("5. �ҽ��� \t 1000��\t %d��\n", sausage[0]);
	printf("6. �ý��� ����\n\n�� ");

	scanf("%d", &number);

		if (number == 1)
		{
			system("cls");
			Coke();
		}
		else if (number == 2)
		{
			system("cls");
			Sprite();
		}
		else if (number == 3)
		{
			system("cls");
			Fanta();
		}
		else if (number == 4)
		{
			system("cls");
			Hamberger();
		}
		else if (number == 5)
		{
			system("cls");
			Sausage();
		}
		else if (number == 6)
		{
			Exit();
		}
		else
		{
			printf("�ٽ� �Է��� �ּ���.\n");
			menu();
		}
}

void Vending_Machine()
{
	printf("���� �ݾ�: %d\n\n", money[0]);

	printf("���� �����ϼ���.\n�� ");
	scanf("%d", &money[0]);

	if (money[0] > 0)
	{
		system("cls");
		menu();
	}
	else
	{
		system("cls");
		Vending_Machine();
	}
	printf("\n\n�Ž��� �� %d�� �Դϴ�.\n�����մϴ�.\n\n\n", money[0]);
	_getch();
}

int main()
{
	Vending_Machine();

	return 0;
}