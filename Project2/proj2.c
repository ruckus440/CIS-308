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

#include <stdio.h>
#include "io.h"
#include "bst.h"

/**********************************************
* Description: main is the driver for the program.
 * It presents a menu for the user until they decide
 * to quit.  It calls the appropriate methods according
 * to user input in order to insert a new number
 * into the tree, search for a number, traverse and
 * output the binary search tree, or free the memory
 * and quit.
 *
* Input: The user enters a selection when prompted
 * by the menu.  The user enters a number to insert
 * or search for in the binary search tree.
 *
* Output: The program inserts or searches for a
 * number in the binary search tree depending on
 * user input.  It uses in-order traversal to print
 * the contents of the tree.
***********************************************/
int main() {

    Node * root = newNode(NULL);
    char * outputChar = malloc(sizeof(char));
    char input;
    int num;

    do {
        input = menuPrompt();

        if (input == 'i')
        {
            root = insert(root, insertInput());
            input = 'a';
        }

        if (input == 's')
        {
            num = searchInput();
            searchOutput(search(root, num), num);
            input = 'a';
        }

        if (input == 't')
        {
            traverse(root, outputChar);
            printf("\n");
        }

        if (input == 'q')
        {
            freeMemory(root);
            exit(0);
        }

        getchar();
    } while (input != 'q');
}