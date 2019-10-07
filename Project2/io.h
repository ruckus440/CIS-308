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


#ifndef PROJECT2_IO_H //CLion generated
#define PROJECT2_IO_H //CLion generated

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

char menuPrompt();
int insertInput();
int searchInput();
void searchOutput(int, int);
void traversePrint(char output[]);


#endif //PROJECT2_IO_H //CLion generated
