#include "BST.h"

void Menu() {
	printf("\n-----------------------");
	printf("\n-----------------------");
	printf("\n   �ڳ��� ���� ������");
	printf("\n\n     1. ���� �Է�");
	printf("\n\n     2. ���� ã��");
	printf("\n\n     3. ���� ���");
	printf("\n\n     4. ���� ����");
	printf("\n\n     5. ���� ����\n");
	printf("\n-----------------------");
	printf("\n-----------------------");
	printf("\n\n �� ");
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
		printf("\n�ùٸ� ������ �Է��� �ּ���");
		_getch();
		Input();
		break;
	}
}