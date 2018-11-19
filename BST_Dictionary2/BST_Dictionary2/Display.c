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
	Element nd;
	BTreeNode* root = NULL;
	BTreeNode* FNode = NULL;

	int num;

	system("cls");
	Menu();
	scanf("%d", &num);

	switch (num) 
	{
	case 1:
		printf("\t 나라 : ");
		gets(nd.Country);
		printf("\t 수도 : ");
		gets(nd.Capital);
		InputNode(&root, nd);
		break;
	case 2:
		printf("사전을 탐색합니다.");
		printf("나라 : ");
		gets(nd.Country);
		FNode = SearchNode(root, nd);
		if (FNode != NULL) {
			printf("\n\t [%s 검색완료]\n", FNode->data.Country);
			printf("\t 나라 : %s\n", FNode->data.Country);
			printf("\t 수도 : %s\n", FNode->data.Capital);
		}
		else printf("\n\t 나라를 찾지 못했습니다. \n");
		break;
	case 3:
		printf("나라를 출력합니다.\n");
		PrintNode(root);
		printf("\n\n");
		break;
	case 4:
		printf("삭제할 나라 : ");
		gets(nd.Country);
		DeleteNode(&root, nd);
		break;
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