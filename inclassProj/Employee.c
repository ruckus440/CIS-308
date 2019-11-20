//
// Created by mwruc on 11/12/2019.
//

#include "Employee.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Person* new_Employee(const char* pFN, const char* pLN, const char* dep, const char* company, const int* salary) {
    Person* pObj = new_Person(pFN, pLN);

    Employee* pEmpObj = (Employee*)malloc(sizeof(Employee));
    if (pEmpObj == NULL){
        //ToDo pObj->Delete;
        return NULL;
    }
    pObj->pDerivedObj = pEmpObj;
    pEmpObj->pBaseObj = pObj;

    pEmpObj->pCompany = malloc(sizeof(char) * strlen(company)+1);
    if (pEmpObj->pCompany == NULL){
        return NULL;
    }
    strcpy(pEmpObj->pCompany, company);

    pEmpObj->pDepartment = malloc(sizeof(char) * strlen(dep)+1);
    if (pEmpObj->pDepartment == NULL){
        return NULL;
    }
    strcpy(pEmpObj->pDepartment, dep);

   pEmpObj->nSalary = salary;

   pEmpObj->Display= Employee_Display;
   return pEmpObj->pBaseObj;
}

void Employee_Display(Person* pPersonObj) {
    printf("*** Employee Info ***");
    printf("%s works at %s\n", pPersonObj->pLastName, ((Employee*)pPersonObj->pDerivedObj)->pCompany);
}

