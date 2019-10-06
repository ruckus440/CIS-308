//
// Created by mwruc on 10/3/2019.
//
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io.h"

char promptUser()
{
    char selection;
    printf("Enter (i)nsert, (s)earch, inorder (t)raversal,  or (q)uit: ");
    scanf("%c\n", selection);
    return selection;
}

int insertNumber()
{
    int num;
    printf("\nEnter a number to insert: ");
    scanf("%d\n", num);
    return num;
}

int searchNumber()
{
    int num;
    printf("\nEnter a number to search for: ");
    scanf("%d\n", num);
    return num;
}


