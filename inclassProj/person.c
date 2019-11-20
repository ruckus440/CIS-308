//
// Created by mwruc on 11/12/2019.
//

#include "person.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

Person* new_Person(const char* pFN, const char* pLN) {
    Person* pObj = NULL;
    pObj = (Person*)malloc(sizeof(Person));
    if (pObj == NULL) {
        return NULL;
    }

    pObj->pDerivedObj = NULL;
    pObj->pFirstName = malloc(sizeof(char)* strlen(pFN)+1);
    if (pObj->pFirstName == NULL) {
        return NULL;
    }
    strcpy(pObj->pFirstName, pFN);

    pObj->pLastName = malloc(sizeof(char)* strlen(pLN)+1);
    if (pObj->pLastName == NULL) {
        return  NULL;
    }
    strcpy(pObj->pLastName, pLN);

    // Initialize the intefaces
    pObj->Display = Person_DisplayInfo;
}

void Person_DisplayInfo(Person* pObj) {
    printf("\n%s %s\n", pObj->pFirstName, pObj->pLastName);
}


