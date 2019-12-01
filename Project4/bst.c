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

#include "bst.h"
#include "io.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * Struct to represent nodes in the binary search tree.
 * Has int as the key and pointers to left and right children.
 */
typedef struct bstNode
{
    int key;
    struct bstNode * leftChild;
    struct bstNode * rightChild;
} Node;

/**
 * Builds a new node with an int as the key and references to left and right children
 * @param key The key for this node
 * @return The node
 */
Node * newNode(int key)
{
    Node * node = malloc(sizeof(Node));
    node->key = key;
    node->leftChild = NULL;
    node->rightChild = NULL;
    return node;
}

/**
 * Inserts a new node into the search tree.
 * @param node The node to compare to.
 * @param key The key to insert.
 * @return The node inserted into the tree.
 */
Node * insert(Node * node, int key)
{
    if ((node->key == 0 || node->key == NULL) && key != 0)
    {
        node->key = key;
        return node;
    }

    if (node->key == key)
    {
        return node;
    }

    else if (key > node->key)
    {
        if (node->rightChild == NULL)
        {
            node->rightChild = newNode(key);
            return node;
        }
        else
        {
            insert(node->rightChild, key);
        }
    }

    else
    {
        if (node->leftChild == NULL)
        {
            node->leftChild = newNode(key);
            return node;
        }
        else
        {
            insert(node->leftChild, key);
        }
    }
    return node;
}

/**
 * Searches the binary tree for the given integer
 * @param node Root to search from
 * @param key Integer to search for
 * @return Indicates if it was found
 */
int search(Node * node, int key)
{
    if(!node)
    {
        return 0;
    }
    else if (node->key == key)
    {
        return 1;
    }
    else if (node->key < key)
    {
        return search(node->rightChild, key);
    }
    else
    {
        return search(node->leftChild, key);
    }
}

/**
 * Performs an in-order traversal.  Returns the keys in increasing order.
 * @param node Root to search from
 * @param output Output the result to a char
 */
void traverse(Node * node, char * output)
{
    if (node != NULL)
    {
        traverse(node->leftChild, output);
        sprintf(output, "%d", node->key);
        traversePrint(output);
        traverse(node->rightChild, output);
    }
}

/**
 * Frees the memory of the tree node pointers
 * @param node
 */
void freeMemory(Node * node)
{
    free(node);
}

Node * delete(Node * node, int key)
{
    if (node == NULL)
    {
        return node;
    }

    if (key < node->key)
    {
        node->leftChild = delete(node->leftChild, key);
    }
    else if (key > node->key)
    {
        node->rightChild = delete(node->rightChild, key);
    }
    else
    {
        if (node->leftChild == NULL)
        {
            Node * temp = node->rightChild;
            freeMemory(node);
            return temp;
        }
        else if (node->rightChild == NULL)
        {
            Node * temp = node->leftChild;
            freeMemory(node);
            return temp;
        }

        Node * temp = minKey(node);
        node->key = temp->key;
        node->rightChild = delete(node->rightChild, temp->key);
    }
}

Node * minKey(Node * node)
{
    Node * current = node;
    while (current->leftChild != NULL)
    {
        current = current->leftChild;
    }
    return  current;
}
