//
// Created by mwruc on 11/12/2019.
//

#ifndef INCLASSPROJ_EMPLOYEE_H
#define INCLASSPROJ_EMPLOYEE_H

#include "person.h"

typedef struct _Employee Employee;
typedef void (*fptrEmployeeDisplayInfo) (Person*);

typedef struct _Employee {
    Person* pBaseObj;
    char* pDepartment;
    char* pCompany;
    int nSalary;
    fptrEmployeeDisplayInfo Display;
}Employee;

Person* new_Employee(const char* pFN, const char* pLN, const char* dep, const char* company, const int* salary);

void Employee_Display(Person* pPersonObj);


#endif //INCLASSPROJ_EMPLOYEE_H
