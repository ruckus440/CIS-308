/***********************************************************
* Name: Mike Ruckert *
* Date: 12/1/2019 *
* Assignment: Project 4 - Binary Search Tree; Node Deletion*
************************************************************
* This program builds a binary search tree to
* store integers input by the user.  It uses
* a struct to represent the node and pointers
* to access and modify the search tree. *
* **Added for Project 4: This program also
* **allows the user to delete a node from the
* **binary search tree.
************************************************************/

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
 * Recursively frees the memory of the tree node pointers
 * @param node
 */
void freeMemory(Node * node)
{
    if (node == NULL)
    {
        return;
    }
    freeMessage(node);
    freeMemory(node->rightChild);
    freeMemory(node->leftChild);
    free(node);
}

/**
 * Deletes the node with the key input by the user.
 * Precondition: The node exists.
 * Post condition: The node is removed.
 * @param node
 * @param key
 * @return
 */
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
            free(node);
            return temp;
        }
        else if (node->rightChild == NULL)
        {
            Node * temp = node->leftChild;
            free(node);
            return temp;
        }
        Node * temp = minKey(node);
        node->key = temp->key;
        node->rightChild = delete(node->rightChild, temp->key);
        delete(temp, NULL);
    }
    return node;
}

/**
 * Looks for the minimum key value to aid in deletion.  The node with the
 * minimum key replaces the node to be deleted when the node to be deleted
 * has two children.
 * Pre condition: A node that is not null
 * Post condition: The node with the smallest key.
 * @param node
 * @return
 */
Node * minKey(Node * node)
{
    Node * current = node;
    while (current->leftChild != NULL)
    {
        current = current->leftChild;
    }
    return  current;
}
