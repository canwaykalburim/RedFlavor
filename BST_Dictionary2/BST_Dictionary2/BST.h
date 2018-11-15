#ifndef __BST_H__
#define __BST_H__

#define SIZE 100

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>  
#include <ctype.h> 
#include <Windows.h>

typedef struct {
	char Country[SIZE];
	char Capital[SIZE];
} Element;

typedef struct TreeNode {
	Element data;
	struct BTreeNode* left;
	struct BTreeNode* right;
} BTreeNode;

#endif