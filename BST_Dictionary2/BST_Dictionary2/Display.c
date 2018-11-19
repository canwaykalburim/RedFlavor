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
		printf("\t ���� : ");
		gets(nd.Country);
		printf("\t ���� : ");
		gets(nd.Capital);
		InputNode(&root, nd);
		break;
	case 2:
		printf("������ Ž���մϴ�.");
		printf("���� : ");
		gets(nd.Country);
		FNode = SearchNode(root, nd);
		if (FNode != NULL) {
			printf("\n\t [%s �˻��Ϸ�]\n", FNode->data.Country);
			printf("\t ���� : %s\n", FNode->data.Country);
			printf("\t ���� : %s\n", FNode->data.Capital);
		}
		else printf("\n\t ���� ã�� ���߽��ϴ�. \n");
		break;
	case 3:
		printf("���� ����մϴ�.\n");
		PrintNode(root);
		printf("\n\n");
		break;
	case 4:
		printf("������ ���� : ");
		gets(nd.Country);
		DeleteNode(&root, nd);
		break;
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