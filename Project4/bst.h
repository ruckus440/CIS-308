//
// Created by Mike on 12/1/2019.
//

#ifndef PROJECT4_BST_H
#define PROJECT4_BST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct bstNode Node;
Node * newNode(int);
Node * insert(Node *node, int key);
int search(Node *node, int key);
void traverse(Node *node, char *output);
void freeMemory(Node *node);
Node * delete(Node *, int);
Node * minKey(Node *);

#endif //PROJECT4_BST_H
