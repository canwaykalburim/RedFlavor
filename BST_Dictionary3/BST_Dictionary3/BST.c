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
			printf("\n �̹� ���� �����Ͱ� �ֽ��ϴ�! \n");
			return;
		}
		qNode = pNode;
		if (strcmp(x.Country, pNode->data.Country) < 0) {
			printf(" ���� �̵�\n");
			pNode = pNode->left;
		}
		else if (strcmp(x.Country, pNode->data.Country) > 0) {
			printf(" ������ �̵�\n");
			pNode = pNode->right;
		}
	}
	nNode = (BSTreeNode*)malloc(sizeof(BSTreeNode));
	nNode->data = x;
	nNode->left = NULL;
	nNode->right = NULL;

	if (qNode != NULL) {
		if (strcmp(x.Country, qNode->data.Country) < 0) {
			printf(" ���ʿ� ����\n");
			qNode->left = nNode;
		}
		else if (strcmp(x.Country, qNode->data.Country) > 0) {
			printf(" �����ʿ� ����\n");
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
		printf("\nã�� �����Ͱ� ���� Ʈ���� �����ϴ�!\n");
		_getch();
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
	printf("\nã�� �����Ͱ� �����ϴ�!");
	_getch();
	_getch();
	return root;
}

void Display(BSTreeNode* root)
{
	if (root != NULL) {
		Display(root->left);
		printf(" %s : %s\n\n", root->data.Country, root->data.Capital);
		Display(root->right);
	}
	else
		printf("\n ����� �����Ͱ� �����ϴ�!");
	_getch();
}

int main(void)
{
	Element EL;
	BSTreeNode* root = NULL;
	BSTreeNode* FNode = NULL;
	char Choice;

	while (1) {
		system("cls");
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
				system("cls");
				printf("\n [%s �˻��Ϸ�]\n\n", FNode->data.Country);
				printf(" ���� : %s\n", FNode->data.Country);
				printf(" ���� : %s\n", FNode->data.Capital);
				_getch();
				_getch();
			}
			else 
				printf("\n\t ���ڸ� ã�� ���߽��ϴ�. \n");
			break;
		case '3':
			system("cls");
			printf("\n ������ ����մϴ�\n\n");
			Display(root);
			printf("\n\n");
			_getch();
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