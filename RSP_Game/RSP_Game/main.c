#include "common.h"

#define Options_Screen "C:\\Users\\DSM2018\\source\\repos\\RSP_Game\\Music\\Options_Screen.wav"

void Muse()
{
	PlaySound(TEXT(Options_Screen), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
}

int main() {
	int nInput, a;
	int draw = 0, win = 0, cont = 0;

	_getch();
	_getch();

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
				_getch();
				_getch();
				system("cls");
			}
			else if (nInput == 2 && a == 1) {
				system("cls");
				printf("\n   player: ����\n   computer: ����\n\n   you win.\n");
				win++;
				_getch();
				_getch();
				system("cls");
			}
			else if (nInput == 3 && a == 2) {
				system("cls");
				printf("\n   player: ���ڱ�\n   computer: ����\n\n   you win.\n");
				win++;
				_getch();
				_getch();
				system("cls");
			}
			else if (nInput == 1 && a == 2) {
				system("cls");
				printf("\n   player: ����\n   computer: ����\n\n   you lose.\n");
				break;
			}
			else if (nInput == 2 && a == 3) {
				system("cls");
				printf("\n   player: ����, computer: ��\n\n   you lose.\n");
				break;
			}
			else if (nInput == 3 && a == 1) {
				system("cls");
				printf("\n   player: ���ڱ�\n   computer: ����\n\n   you lose.\n");
				break;
			}
		}
		else {
			system("cls");
			printf("\n   �ٸ� ���� �Է��� �ּ���.\n");
			win++;
			_getch();
			_getch();
			system("cls");
		}
		cont++;
		printf("\n   0�� �Է��ϸ� �����մϴ�.\n");
	}
	printf("\n\n   ");
	printf("������ ��� : %d�� %d�� %d��\n", cont, win, draw);
	_getch();
	_getch();
}