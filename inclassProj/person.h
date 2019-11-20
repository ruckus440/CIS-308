//
// Created by mwruc on 11/12/2019.
//

#ifndef INCLASSPROJ_PERSON_H
#define INCLASSPROJ_PERSON_H

typedef  struct  _Person Person;

// declaration of pointers to function
typedef void (*fptrDisplayInfo)(Person*);
typedef void (*fptrWriteToFile)(Person*, const char*);
typedef void (*fptrDelete)(Person*);

typedef  struct _Person {
    void* pDerivedObj;
    char* pFirstName;
    char* pLastName;
    // List of interfaces
    fptrDisplayInfo Display;
}Person;

Person* new_Person(const char* const pFN, const char* const pLN);

void Person_DisplayInfo(Person* pPersonObj);

#endif //INCLASSPROJ_PERSON_H
