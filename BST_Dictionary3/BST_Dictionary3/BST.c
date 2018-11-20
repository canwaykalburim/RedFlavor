#include "BST.h"

void Menu()
{
	printf("\n------------------------");
	printf("\n------------------------");
	printf("\n   ★나라 수도 사전★");
	printf("\n\n     1. 나라 입력");
	printf("\n\n     2. 나라 찾기");
	printf("\n\n     3. 나라 목록");
	printf("\n\n     4. 나라 삭제");
	printf("\n\n     5. 사전 종료\n");
	printf("\n------------------------");
	printf("\n------------------------");
	printf("\n\n ▶ ");
}

void InputNode(BSTreeNode **root, Element x) {
	BSTreeNode *nNode;
	BSTreeNode *qNode = NULL;
	BSTreeNode *pNode = *root;

	while (pNode != NULL) {
		if (strcmp(x.Country, pNode->data.Country) == 0) {
			printf("\n\t 이미 같은 데이터가 있습니다! \n");
			return;
		}
		qNode = pNode;
		if (strcmp(x.Country, pNode->data.Country) < 0) {
			printf("\t 왼쪽 이동\n");
			pNode = pNode->left;
		}
		else if (strcmp(x.Country, pNode->data.Country) > 0) {
			printf("\t 오른쪽 이동\n");
			pNode = pNode->right;
		}
	}
	nNode = (BSTreeNode*)malloc(sizeof(BSTreeNode));
	nNode->data = x;
	nNode->left = NULL;
	nNode->right = NULL;

	if (qNode != NULL) {
		if (strcmp(x.Country, qNode->data.Country) < 0) {
			printf("\t 왼쪽에 저장\n");
			qNode->left = nNode;
		}
		else if (strcmp(x.Country, qNode->data.Country) > 0) {
			printf("\t 오른쪽에 저장\n");
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
		printf("\n\t찾는 데이터가 이진 트리에 없습니다!\n");
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
	printf("\n\t찾는 데이터가 없습니다!");
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
			printf("\n\n 나라 : ");
			gets(EL.Country);
			printf("\n\n 수도 : ");
			gets(EL.Capital);
			InputNode(&root, EL);
			break;
		case '2':
			system("cls");
			printf("사전을 탐색합니다");
			printf("\n\n나라 : ");
			gets(EL.Country);
			FNode = SearchNode(root, EL);
			if (FNode != NULL) {
				printf("\n\t [%s 검색완료]\n", FNode->data.Country);
				printf("\t 나라 : %s\n", FNode->data.Country);
				printf("\t 수도 : %s\n", FNode->data.Capital);
				_getch();
			}
			else printf("\n\t 문자를 찾지 못했습니다. \n");
			break;
		case '3':
			system("cls");
			printf("사전을 출력합니다\n");
			Display(root);
			printf("\n\n");
			_getch();
			break;
		case '4':
			system("cls");
			printf("삭제할 나라 : ");
			gets(EL.Country);
			DeleteNode(&root, EL);
			break;
		case '5':
			exit(1);
		default:
			printf("메뉴를 다시 선택하세요\n");
			_getch();
			break;
		}
		system("cls");
	}
	return 0;
}