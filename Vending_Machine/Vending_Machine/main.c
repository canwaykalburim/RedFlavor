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

	printf("현재 금액: %d\n\n", money[0]);

	if (money[0] < nCoke)
	{
		printf("돈을 더 투입하여 주십시오\n\n");
		printf("1. 돈을 더 투여한다.\n");
		printf("2. 다른 메뉴를 고른다.\n");
		printf("3. 시스템을 종료한다.\n\n⇒ ");

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
				printf("다시 선택하여 주십시오.\n\n⇒ ");
		}
	}
	else
	{
		system("cls");
		money[0] -= 700;
		if (coke[0] == 0)
		{
			system("cls");
			printf("재고가 부족합니다.\n");
			_getch();
			_getch();
			menu();
		}
		else
		{
		coke[0] -= 1;
		printf("현재 금액: %d\n\n", money[0]);
		printf("원하시는 음료가 나왔습니다.");
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

	printf("현재 금액: %d\n\n", money[0]);

	if (money[0] < nSprite)
	{
		printf("돈을 더 투입하여 주십시오\n\n");
		printf("1. 돈을 더 투여한다.\n");
		printf("2. 다른 메뉴를 고른다.\n");
		printf("3. 시스템을 종료한다.\n\n⇒ ");

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
				printf("다시 선택하여 주십시오.\n\n⇒ ");
		}
	}
	else
	{
		system("cls");
		money[0] -= 700;
		if (sprite[0] == 0)
		{
			system("cls");
			printf("재고가 부족합니다.\n");
			_getch();
			_getch();
			menu();
		}
		else
		{
			sprite[0] -= 1;
			printf("현재 금액: %d\n\n", money[0]);
			printf("원하시는 음료가 나왔습니다.");
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

	printf("현재 금액: %d\n\n", money[0]);

	if (money[0] < nFanta)
	{
		printf("돈을 더 투입하여 주십시오\n\n");
		printf("1. 돈을 더 투여한다.\n");
		printf("2. 다른 메뉴를 고른다.\n");
		printf("3. 시스템을 종료한다.\n\n⇒ ");

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
				printf("다시 선택하여 주십시오.\n\n⇒ ");
		}
	}
	else
	{
		system("cls");
		money[0] -= 700;
		fanta[0] -= 1;
		printf("현재 금액: %d\n\n", money[0]);
		printf("원하시는 음료가 나왔습니다.");
		_getch();
		_getch();
		menu();
	}
}

void Hamberger()
{
	int nHamberger = 1500, nInput;

	system("cls");

	printf("현재 금액: %d\n\n", money[0]);

	if (money[0] < nHamberger)
	{
		printf("돈을 더 투입하여 주십시오\n\n");
		printf("1. 돈을 더 투여한다.\n");
		printf("2. 다른 메뉴를 고른다.\n");
		printf("3. 시스템을 종료한다.\n\n⇒ ");

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
				printf("다시 선택하여 주십시오.\n\n⇒ ");
		}
	}
	else
	{
		system("cls");
		money[0] -= 1500;
		if (hamberger[0] == 0)
		{
			system("cls");
			printf("재고가 부족합니다.\n");
			_getch();
			_getch();
			menu();
		}
		else
		{
			hamberger[0] -= 1;
			printf("현재 금액: %d\n\n", money[0]);
			printf("원하시는 음식이 나왔습니다.");
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

	printf("현재 금액: %d\n\n", money[0]);

	if (money[0] < nSausage)
	{
		printf("돈을 더 투입하여 주십시오\n\n");
		printf("1. 돈을 더 투여한다.\n");
		printf("2. 다른 메뉴를 고른다.\n");
		printf("3. 시스템을 종료한다.\n\n⇒ ");

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
				printf("다시 선택하여 주십시오.\n\n⇒ ");
		}
	}
	else
	{
		system("cls");
		money[0] -= 1000;
		if (sausage[0] == 0)
		{
			system("cls");
			printf("재고가 부족합니다.\n");
			_getch();
			_getch();
			menu();
		}
		else
		{
			sausage[0] -= 1;
			printf("현재 금액: %d\n\n", money[0]);
			printf("원하시는 음식이 나왔습니다.");
			_getch();
			_getch();
			menu();
		}
	}
}

int Exit()
{
	system("cls");
	printf("시스템을 종료합니다.\n\n");
	return 0;
}

void Plus()
{
	int P_money[SIZE];

	system("cls");
	printf("얼마를 추가하시겠습니까?\n\n⇒ ");
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

	printf("현재 금액: %d\n\n", money[0]);
	printf("메뉴를 선택하세요.\n\n");
	printf("1. 콜라 \t 700원\t %d개\n", coke[0]);
	printf("2. 사이다 \t 700원\t %d개\n", sprite[0]);
	printf("3. 환타 \t 700원\t %d개\n", fanta[0]);
	printf("4. 햄버거 \t 1500원\t %d개\n", hamberger[0]);
	printf("5. 소시지 \t 1000원\t %d개\n", sausage[0]);
	printf("6. 시스템 종료\n\n⇒ ");

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
			printf("다시 입력해 주세요.\n");
			menu();
		}
}

void Vending_Machine()
{
	printf("현재 금액: %d\n\n", money[0]);

	printf("돈을 투여하세요.\n⇒ ");
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
	printf("\n\n거스름 돈 %d원 입니다.\n감사합니다.\n\n\n", money[0]);
	_getch();
}

int main()
{
	Vending_Machine();

	return 0;
}