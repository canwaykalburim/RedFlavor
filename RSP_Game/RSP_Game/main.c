#include "common.h"

#define Options_Screen "C:\\Users\\DSM2018\\Desktop\\�ҽ� �ڵ�\\_C\\RSP_Game\\Music\\Options_Screen.wav"

void Menu();

void Muse()
{
	PlaySound(TEXT(Options_Screen), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
}

int draw = 0, win = 0, lose = 0 ,cont = 0;

void Game() {
	int nInput, a;
	int WS = 0;

	_getch();
	system("cls");
	Muse();

	while (1) {
		printf("\n   [���� ���� ��]");
		printf("\n\n   ����: 1�� \n   ����: 2�� \n   ��  : 3��\n\n   �� ");
		scanf("%d", &nInput);

		srand((int)time(NULL));
		a = rand() % ((3 - 1) + 1) + 1;

		if (nInput == a) {

			if (a == 1) {
				system("cls");
				printf("\n   player: ����\n   computer: ����\n\n   draw.\n");
				draw++;
				_getch();
				_getch();
				system("cls");
			}
			else if (a == 2) {
				system("cls");
				printf("\n   player: ����\n   computer: ����\n\n   draw.\n");
				draw++;
				_getch();
				_getch();
				system("cls");
			}
			else {
				system("cls");
				printf("\n   player: ���ڱ�\n   computer: ���ڱ�\n\n   draw.\n");
				draw++;
				_getch();
				_getch();
				system("cls");
			}
		}
		else if (nInput == 0) {
			system("cls");
			printf("\n   �����ϰڽ��ϴ�.\n");
			break;
		}
		else if (nInput != a && nInput < 5) {

			if (nInput == 1 && a == 3) {
				system("cls");
				printf("\n   player: ����\n   computer: ��\n\n   you win.\n");
				win++;
				WS++;
				_getch();
				_getch();
				system("cls");
			}
			else if (nInput == 2 && a == 1) {
				system("cls");
				printf("\n   player: ����\n   computer: ����\n\n   you win.\n");
				win++;
				WS++;
				_getch();
				_getch();
				system("cls");
			}
			else if (nInput == 3 && a == 2) {
				system("cls");
				printf("\n   player: ���ڱ�\n   computer: ����\n\n   you win.\n");
				win++;
				WS++;
				_getch();
				_getch();
				system("cls");
			}
			else if (nInput == 1 && a == 2) {
				system("cls");
				printf("\n   player: ����\n   computer: ����\n\n   you lose.\n");
				lose++;
				_getch();
				_getch();
				system("cls");
				cont++;
				break;
			}
			else if (nInput == 2 && a == 3) {
				system("cls");
				printf("\n   player: ����, computer: ��\n\n   you lose.\n");
				lose++;
				_getch();
				_getch();
				system("cls");
				cont++;
				break;
			}
			else if (nInput == 3 && a == 1) {
				system("cls");
				printf("\n   player: ���ڱ�\n   computer: ����\n\n   you lose.\n");
				lose++;
				_getch();
				_getch();
				system("cls");
				cont++;
				break;
			}
		}
		else {
			system("cls");
			printf("\n   �ٸ� ���� �Է��� �ּ���.\n");
			cont--;
			_getch();
			_getch();
			system("cls");
		}
		cont++;
		printf("\n   0�� �Է��ϸ� �����մϴ�.\n");
	}
	printf("\n\n   ������ ��� : %d�� %d�� %d�� %d��\n", cont, win, draw, lose);
	_getch();
	_getch();
	system("cls");
	Menu();
}

void Game_Ex() {
	system("cls");
	printf("\n   [���� ��]\n");
	printf("\n   1. �÷��̾�� ���� ���� �� �� �ϳ��� �����մϴ�.\n");
	printf("\n   2. �����ϸ� PC�� �������� ���� ���� �� �� �ϳ��� �����մϴ�.\n");
	printf("\n   3. ���ÿ� ���� ���а� ������ �й��ϸ� �޴��� ���ư��ϴ�.\n");

	printf("\n\n  �޴��� ���ư��� ��");
	_getch();
	_getch();
	system("cls");
	Menu();
}

void Menu() {
	int nInput;

	_getch();
	Muse();
	printf("\n   [���� ���� ��]\n");
	printf("\n   1. ���� ����\n\n   2. ���� ����\n\n   3. ���� ����\n");
	while (1) {
		printf("\n  �� ");
		scanf("%d", &nInput);

		if (nInput == 1) {
			Game();
			break;
		}
		else if (nInput == 2) {
			Game_Ex();
			break;
		}
		else if (nInput == 3) {
			printf("\n");
			break;
		}
		else {
			printf("\n   �ٽ� �Է����ּ���.");
		}
	}
}

void Grapy() {
	char Intro[22] = "����ִ� ���� ���� ��";

	_getch();

	printf("\n   ");
	for (int i = 0; i < 22; i++) {
		printf("%c", Intro[i]);
		Sleep(200);
	}
	printf("\n\n");
	printf("   ..       ..   \t\t	       ..\n");
	printf("    ..     ..   \t ........\t   ..  ..  ..\n");
	printf("     ..   ..     \t..........\t..  .. ..  ..\n");
	printf("     .......      \t..........\t .. .. ..  ..   ..\n");
	printf("    .........   \t..........\t  .. .. .. ..  ..\n");
	printf("    .........   \t ........\t  ..............\n");
	printf("     .......   \t\t\t\t  .............\n");
	printf("\t\t\t\t\t  ...........\n");
	printf("\t\t\t\t\t   .........\n\n\n");
	_getch();
	_getch();
	system("cls");
}

int main(void) {
	Grapy();
	Menu();
}