/*
 * Mike Ruckert
 * CIS 308 Lab 5
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct person {
    char name[20];
    int age;

    enum kindOfPerson {
        child,
        collegeStudent,
        adult
    } kindPerson;

    union {
        struct {
            char school[20];
        } child;
        struct {
            char college[20];
            double gpa;
        } collegeStudent;
        struct {
            char company[20];
            int salary;
        } adult;
    } kind;
} Person;

void display(Person *p) {
    printf("\nName: %s\n", p->name);
    printf("Age: %d\n", p->age);
    switch (p->kindPerson){
        case child:
            printf("School: %s\n", p->kind.child.school);
            break;
        case collegeStudent:
            printf("College: %s\n", p->kind.collegeStudent.college);
            printf("GPA: %f\n", p->kind.collegeStudent.gpa);
            break;
        case adult:
            printf("Company: %s\n", p->kind.adult.company);
            printf("Salary: $%d\n", p->kind.adult.salary);
            break;
    }
}

int main() {

    Person p1;
    Person * Allison = malloc(sizeof(Person));
    Person * Bob = malloc(sizeof(Person));

    strcpy(p1.name, "Willie");
    p1.age = 20;
    p1.kindPerson = 1;
    strcpy(p1.kind.collegeStudent.college, "K-State");
    p1.kind.collegeStudent.gpa = 3.5;
    display(&p1);

    Allison->kindPerson = 0;
    Allison->age = 10;
    strcpy(Allison->kind.child.school, "Amanda Arnold Elementary");
    strcpy(Allison->name, "Allison");
    display(Allison);

    Bob->kindPerson = 2;
    Bob->age = 35;
    strcpy(Bob->kind.adult.company, "BestBuy");
    strcpy(Bob->name, "Bob");
    Bob->kind.adult.salary = 45000;
    display(Bob);

    free(Allison);
    free(Bob);

    return 0;
}

