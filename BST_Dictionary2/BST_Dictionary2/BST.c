#include "BST.h"

void InputNode(BTreeNode **bstRoot, Element x) {
	BTreeNode *nNode;
	BTreeNode *qNode = NULL;
	BTreeNode *pNode = *bstRoot;


	while (pNode != NULL) {
		if (strcmp(x.Country, pNode->data.Country) == 0) {
			printf("\n\t 이미 같은 키가 있습니다! \n");
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

	nNode = (BTreeNode*)malloc(sizeof(BTreeNode));
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
		*bstRoot = nNode;
	}
}

BTreeNode* SearchNode(BTreeNode* bstRoot, Element x)
{
	while (bstRoot != NULL) {
		if (strcmp(x.Country, bstRoot->data.Country) == 0) return bstRoot;
		else if (strcmp(x.Country, bstRoot->data.Country) < 0) bstRoot = bstRoot->left;
		else if (strcmp(x.Country, bstRoot->data.Country) > 0) bstRoot = bstRoot->right;
	}
	printf("\n\t찾는 키가 없습니다!");
	return bstRoot;
}

void PrintNode(BTreeNode* root)
{
	int i;
	if (root != NULL) {
		PrintNode(root->left);
		printf("\t %s : %s",
			root->data.Country, root->data.Capital);
		printf("\t\t\t [");
		for (i = 0; i <= BST_SIZE; i++) {
			if (root->data.Country[i] == NULL)break;
			else printf("%d ", root->data.Country[i]);
		} printf("]\n");
		PrintNode(root->right);
	}
}


void DeleteNode(BTreeNode **bstRoot, Element x)
{
	BTreeNode *pRoot = NULL;
	BTreeNode *pNode = *bstRoot;
	BTreeNode *cRoot;
	BTreeNode *succ, *succ_pRoot;


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
		printf("\n\t찾는 키가 이진 트리에 없습니다!\n");
		return;
	}

	if ((pNode->left == NULL) && (pNode->right == NULL)) {
		if (pRoot != NULL) {
			if (pRoot->left == pNode) pRoot->left = NULL;
			else pRoot->right = NULL;
		}
		else bstRoot = NULL;
	}
	else if ((pNode->left == NULL) || (pNode->right == NULL)) {
		if (pNode->left != NULL) cRoot = pNode->left;
		else cRoot = pNode->right;

		if (pRoot != NULL) {
			if (pRoot->left == pNode) pRoot->left = cRoot;
			else pRoot->right = cRoot;
		}
		else *bstRoot = cRoot;
	}
	else {
		succ_pRoot = pNode;
		succ = pNode->left;
		while (succ->right != NULL) {
			succ_pRoot = succ;
			succ = succ->right;
		}
		if (succ_pRoot->left == succ) succ_pRoot->left;
		else succ_pRoot->right = succ->left;
		pNode->data = succ->data;
		pNode = succ;
	}
	free(pNode);
}