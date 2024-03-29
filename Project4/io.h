#ifndef PROJECT4_IO_H
#define PROJECT4_IO_H

#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include "bst.h"

char menuPrompt();
int insertInput();
int searchInput();
void searchOutput(int, int);
void traversePrint(char output[]);
int deleteInput();
void deleteSuccess(int);
void freeMessage(Node*);

#endif //PROJECT4_IO_H
