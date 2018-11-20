#include "BST.h"

void Menu()
{
	printf("\n------------------------");
	printf("\n------------------------");
	printf("\n   �ڳ��� ���� ������");
	printf("\n\n     1. ���� �Է�");
	printf("\n\n     2. ���� ã��");
	printf("\n\n     3. ���� ���");
	printf("\n\n     4. ���� ����");
	printf("\n\n     5. ���� ����\n");
	printf("\n------------------------");
	printf("\n------------------------");
	printf("\n\n �� ");
}

void InputNode(BSTreeNode **root, Element x) {
	BSTreeNode *nNode;
	BSTreeNode *qNode = NULL;
	BSTreeNode *pNode = *root;

	while (pNode != NULL) {
		if (strcmp(x.Country, pNode->data.Country) == 0) {
			printf("\n\t �̹� ���� �����Ͱ� �ֽ��ϴ�! \n");
			return;
		}
		qNode = pNode;
		if (strcmp(x.Country, pNode->data.Country) < 0) {
			printf("\t ���� �̵�\n");
			pNode = pNode->left;
		}
		else if (strcmp(x.Country, pNode->data.Country) > 0) {
			printf("\t ������ �̵�\n");
			pNode = pNode->right;
		}
	}
	nNode = (BSTreeNode*)malloc(sizeof(BSTreeNode));
	nNode->data = x;
	nNode->left = NULL;
	nNode->right = NULL;

	if (qNode != NULL) {
		if (strcmp(x.Country, qNode->data.Country) < 0) {
			printf("\t ���ʿ� ����\n");
			qNode->left = nNode;
		}
		else if (strcmp(x.Country, qNode->data.Country) > 0) {
			printf("\t �����ʿ� ����\n");
			qNode->right = nNode;
		}
	}
	else {
		*root = nNode;
	}
}

void DeleteNode(BSTreeNode **root, Element x)
{
	BSTreeNode *pRoot = NULL;
	BSTreeNode *pNode = *root;
	BSTreeNode *cRoot;
	BSTreeNode *CL, *CL_pRoot;

	while ((pNode != NULL) && (strcmp(x.Country, pNode->data.Country) != 0)) {
		pRoot = pNode;
		if (strcmp(x.Country, pNode->data.Country) < 0) {
			pNode = pNode->left;
		}
		else {
			pNode = pNode->right;
		}
	}

	if (pNode == NULL) {
		printf("\n\tã�� �����Ͱ� ���� Ʈ���� �����ϴ�!\n");
		return;
	}

	if ((pNode->left == NULL) && (pNode->right == NULL)) {
		if (pRoot != NULL) {
			if (pRoot->left == pNode) pRoot->left = NULL;
			else pRoot->right = NULL;
		}
		else root = NULL;
	}

	else if ((pNode->left == NULL) || (pNode->right == NULL)) {
		if (pNode->left != NULL) cRoot = pNode->left;
		else cRoot = pNode->right;

		if (pRoot != NULL) {
			if (pRoot->left == pNode) pRoot->left = cRoot;
			else pRoot->right = cRoot;
		}
		else *root = cRoot;
	}

	else {
		CL_pRoot = pNode;
		CL = pNode->left;
		while (CL->right != NULL) {
			CL_pRoot = CL;
			CL = CL->right;
		}
		if (CL_pRoot->left == CL) CL_pRoot->left;
		else CL_pRoot->right = CL->left;
		pNode->data = CL->data;
		pNode = CL;
	}
	free(pNode);
}

BSTreeNode* SearchNode(BSTreeNode* root, Element x)
{
	while (root != NULL) {
		if (strcmp(x.Country, root->data.Country) == 0) return root;
		else if (strcmp(x.Country, root->data.Country) < 0) root = root->left;
		else if (strcmp(x.Country, root->data.Country) > 0) root = root->right;
	}
	printf("\n\tã�� �����Ͱ� �����ϴ�!");
	return root;
}

void Display(BSTreeNode* root)
{
	int i;
	if (root != NULL) {
		Display(root->left);
		printf("\t %s : %s",
			root->data.Country, root->data.Capital);
		printf("\t\t\t [");
		for (i = 0; i <= MAX_COUNTRY_SIZE; i++) {
			if (root->data.Country[i] == NULL)break;
			else printf("%d ", root->data.Country[i]);
		} printf("]\n");
		Display(root->right);
	}
}

int main(void)
{
	Element EL;
	BSTreeNode* root = NULL;
	BSTreeNode* FNode = NULL;
	char Choice;

	while (1) {
		Menu();
		Choice = getchar();
		getchar();

		switch (Choice) {
		case '1':
			system("cls");
			printf("\n\n ���� : ");
			gets(EL.Country);
			printf("\n\n ���� : ");
			gets(EL.Capital);
			InputNode(&root, EL);
			break;
		case '2':
			system("cls");
			printf("������ Ž���մϴ�");
			printf("\n\n���� : ");
			gets(EL.Country);
			FNode = SearchNode(root, EL);
			if (FNode != NULL) {
				printf("\n\t [%s �˻��Ϸ�]\n", FNode->data.Country);
				printf("\t ���� : %s\n", FNode->data.Country);
				printf("\t ���� : %s\n", FNode->data.Capital);
				_getch();
			}
			else printf("\n\t ���ڸ� ã�� ���߽��ϴ�. \n");
			break;
		case '3':
			system("cls");
			printf("������ ����մϴ�\n");
			Display(root);
			printf("\n\n");
			_getch();
			break;
		case '4':
			system("cls");
			printf("������ ���� : ");
			gets(EL.Country);
			DeleteNode(&root, EL);
			break;
		case '5':
			exit(1);
		default:
			printf("�޴��� �ٽ� �����ϼ���\n");
			_getch();
			break;
		}
		system("cls");
	}
	return 0;
}