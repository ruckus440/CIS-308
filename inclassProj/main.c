#include <stdio.h>
#include "Person.h"
#include "Employee.h"


int main() {

    Person* Alice = new_Person("Alice", "Sun");
    Person* Bob = new_Employee("Bob", "Smith", "HR", "TCS", 40000);

    Alice->Display(Alice);
    Bob->Display(Bob);



    return 0;
}