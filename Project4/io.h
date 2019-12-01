//
// Created by Mike on 12/1/2019.
//

#ifndef PROJECT4_IO_H
#define PROJECT4_IO_H

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

char menuPrompt();
int insertInput();
int searchInput();
void searchOutput(int, int);
void traversePrint(char output[]);
int deleteInput();
void deleteSuccess();

#endif //PROJECT4_IO_H
