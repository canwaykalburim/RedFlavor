#include "BST.h"

void Menu() {
	printf("\n-----------------------");
	printf("\n-----------------------");
	printf("\n   ★나라 수도 사전★");
	printf("\n\n     1. 나라 입력");
	printf("\n\n     2. 나라 찾기");
	printf("\n\n     3. 나라 목록");
	printf("\n\n     4. 나라 삭제");
	printf("\n\n     5. 사전 종료\n");
	printf("\n-----------------------");
	printf("\n-----------------------");
	printf("\n\n ▶ ");
}

void Input()
{
	int num;

	system("cls");
	Menu();
	scanf("%d", &num);

	switch (num) 
	{
	case 1:
		InputNode();
	case 2:
		SearchNode();
	case 3:
		PrintNode();
	case 4:
		DeleteNode();
	case 5:
		exit(1);
		break;
	default:
		printf("\n올바른 정보를 입력해 주세요");
		_getch();
		Input();
		break;
	}
}