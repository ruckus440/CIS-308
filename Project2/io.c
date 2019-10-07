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

#include <string.h>
#include <stdio.h>
#include "io.h"

/**
 * Presents the user with the main menu for the program
 * and accepts the user's input.
 * @return A char indicating the user's selection.
 */
char menuPrompt()
{
    char input;
    printf("Enter (i)nsert, (s)earch, inorder (t)raversal, or (q)uit: ");
    scanf("%c", &input);
    return input;
}

/**
 * Gets the user's number to insert into the binary search tree.
 * @return The number to insert.
 */
int insertInput()
{
    int input;
    printf("Enter a number to insert: ");
    scanf("%d", &input);
    return input;
}

/**
 * Get the user's number to search for in the binary search tree.
 * @return The number to search for.
 */
int searchInput()
{
    int input;
    printf("Enter a number to search for: ");
    scanf("%d", &input);
    return input;
}

/**
 * Prints the result of the search.  Indicates whether or not the number
 * was in the binary search tree.
 * @param result
 * @param key
 */
void searchOutput(int result, int key)
{
    if (result == 0)
    {
        printf("%d is not in the tree.\n", key);
    }
    else
    {
        printf("%d is in the tree.\n", key);
    }
}

/**
 * Prints the contents of the binary search tree when the user selects traverse
 * @param output
 */
void traversePrint(char *output)
{
    if (strlen(output) == 0)
    {
        printf("There are no nodes to traverse or print.");
    }
    printf("%s ", output);
}