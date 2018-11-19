#ifndef __BST_H__
#define __BST_H__

#define BST_SIZE 100

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>  
#include <ctype.h> 
#include <Windows.h>

#include "BT.h"

typedef struct {
	char Country[BST_SIZE];
	char Capital[BST_SIZE];
} Element;

typedef struct TreeNode {
	Element data;
	struct BTreeNode* left;
	struct BTreeNode* right;
} BTreeNode;

#endif