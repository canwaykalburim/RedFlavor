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
		printf("\n   [가위 바위 보]");
		printf("\n\n   가위: 1번 \n   바위: 2번 \n   보  : 3번\n\n   ⇒ ");
		scanf("%d", &nInput);

		srand((int)time(NULL));
		a = rand() % ((3 - 1) + 1) + 1;

		if (nInput == a) {

			if (a == 1) {
				system("cls");
				printf("\n   player: 가위\n   computer: 가위\n\n   draw.\n");
				draw++;
				_getch();
				_getch();
				system("cls");
			}
			else if (a == 2) {
				system("cls");
				printf("\n   player: 바위\n   computer: 바위\n\n   draw.\n");
				draw++;
				_getch();
				_getch();
				system("cls");
			}
			else {
				system("cls");
				printf("\n   player: 보자기\n   computer: 보자기\n\n   draw.\n");
				draw++;
				_getch();
				_getch();
				system("cls");
			}
		}
		else if (nInput == 0) {
			system("cls");
			printf("\n   종료하겠습니다.\n");
			break;
		}
		else if (nInput != a && nInput < 5) {

			if (nInput == 1 && a == 3) {
				system("cls");
				printf("\n   player: 가위\n   computer: 보\n\n   you win.\n");
				win++;
				_getch();
				_getch();
				system("cls");
			}
			else if (nInput == 2 && a == 1) {
				system("cls");
				printf("\n   player: 바위\n   computer: 가위\n\n   you win.\n");
				win++;
				_getch();
				_getch();
				system("cls");
			}
			else if (nInput == 3 && a == 2) {
				system("cls");
				printf("\n   player: 보자기\n   computer: 바위\n\n   you win.\n");
				win++;
				_getch();
				_getch();
				system("cls");
			}
			else if (nInput == 1 && a == 2) {
				system("cls");
				printf("\n   player: 가위\n   computer: 바위\n\n   you lose.\n");
				break;
			}
			else if (nInput == 2 && a == 3) {
				system("cls");
				printf("\n   player: 바위, computer: 보\n\n   you lose.\n");
				break;
			}
			else if (nInput == 3 && a == 1) {
				system("cls");
				printf("\n   player: 보자기\n   computer: 가위\n\n   you lose.\n");
				break;
			}
		}
		else {
			system("cls");
			printf("\n   다른 수를 입력해 주세요.\n");
			win++;
			_getch();
			_getch();
			system("cls");
		}
		cont++;
		printf("\n   0을 입력하면 종료합니다.\n");
	}
	printf("\n\n   ");
	printf("게임의 결과 : %d전 %d승 %d무\n", cont, win, draw);
	_getch();
	_getch();
}