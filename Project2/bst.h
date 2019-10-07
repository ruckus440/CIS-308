/**********************************************
* Name: Mike Ruckert *
* Date: 10/6/2019 *
* Assignment: Project 2 - Binary Search Tree *
***********************************************
* This program builds a binary search tree to
* store integers input by the user.  It uses
* a struct to represent the node and pointers
* to access and modify the search tree. *
***********************************************/

#ifndef PROJECT2_BST_H //CLion generated
#define PROJECT2_BST_H //CLion generated

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct bstNode Node;
Node * newNode(int);
Node * insert(Node *node, int key);
int search(Node *node, int key);
void traverse(Node *node, char *output);
void freeMemory(Node *node);

#endif //PROJECT2_BST_H //CLion generated
