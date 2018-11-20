#ifndef __BST_H__
#define __BST_H__

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <conio.h>
#include <ctype.h> 
#include <Windows.h>

#define MAX_COUNTRY_SIZE 100
#define MAX_CAPITAL_SIZE 200

typedef struct {
	char Country[MAX_COUNTRY_SIZE];
	char Capital[MAX_CAPITAL_SIZE];
} Element;

typedef struct BSTreeNode {
	Element data;
	struct BSTreeNode* left;
	struct BSTreeNode* right;
} BSTreeNode;

#endif