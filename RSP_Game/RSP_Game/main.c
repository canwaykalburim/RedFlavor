#include "common.h"

#define Options_Screen "C:\\Users\\DSM2018\\Desktop\\소스 코드\\_C\\RSP_Game\\Music\\Options_Screen.wav"

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
				WS++;
				_getch();
				_getch();
				system("cls");
			}
			else if (nInput == 2 && a == 1) {
				system("cls");
				printf("\n   player: 바위\n   computer: 가위\n\n   you win.\n");
				win++;
				WS++;
				_getch();
				_getch();
				system("cls");
			}
			else if (nInput == 3 && a == 2) {
				system("cls");
				printf("\n   player: 보자기\n   computer: 바위\n\n   you win.\n");
				win++;
				WS++;
				_getch();
				_getch();
				system("cls");
			}
			else if (nInput == 1 && a == 2) {
				system("cls");
				printf("\n   player: 가위\n   computer: 바위\n\n   you lose.\n");
				lose++;
				_getch();
				_getch();
				system("cls");
				cont++;
				break;
			}
			else if (nInput == 2 && a == 3) {
				system("cls");
				printf("\n   player: 바위, computer: 보\n\n   you lose.\n");
				lose++;
				_getch();
				_getch();
				system("cls");
				cont++;
				break;
			}
			else if (nInput == 3 && a == 1) {
				system("cls");
				printf("\n   player: 보자기\n   computer: 가위\n\n   you lose.\n");
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
			printf("\n   다른 수를 입력해 주세요.\n");
			cont--;
			_getch();
			_getch();
			system("cls");
		}
		cont++;
		printf("\n   0을 입력하면 종료합니다.\n");
	}
	printf("\n\n   게임의 결과 : %d전 %d승 %d무 %d패\n", cont, win, draw, lose);
	_getch();
	_getch();
	system("cls");
	Menu();
}

void Game_Ex() {
	system("cls");
	printf("\n   [게임 룰]\n");
	printf("\n   1. 플레이어는 가위 바위 보 중 하나를 선택합니다.\n");
	printf("\n   2. 선택하면 PC가 랜덤으로 가위 바위 보 중 하나를 선택합니다.\n");
	printf("\n   3. 선택에 따라 승패가 갈리며 패배하면 메뉴로 돌아갑니다.\n");

	printf("\n\n  메뉴로 돌아가기 ▼");
	_getch();
	_getch();
	system("cls");
	Menu();
}

void Menu() {
	int nInput;

	_getch();
	Muse();
	printf("\n   [가위 바위 보]\n");
	printf("\n   1. 게임 시작\n\n   2. 게임 설명\n\n   3. 게임 종료\n");
	while (1) {
		printf("\n  ⇒ ");
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
			printf("\n   다시 입력해주세요.");
		}
	}
}

void Grapy() {
	char Intro[22] = "재미있는 가위 바위 보";

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