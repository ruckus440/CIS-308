/*
 * Mike Ruckert
 * CIS 308 - Lab 4
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

enum {
    Freshman = 1,
    Sophomore = 2,
    Junior = 3,
    Senior = 4
};

//build struct for students
struct student {
    char name[20];
    int age;
    int year;
};
void display (struct student *);

/*
 * Displays student info.  Takes as a parameter a pointer to student.
 */
void display (struct student * ptr) {
    printf("Student Details: \n");
    printf("Name: %s\n", ptr->name);
    printf("Age: %d\n", ptr->age);
    switch (ptr->year){
        case 1:
            printf("Year: Freshman\n");
            break;
        case 2:
            printf("Year: Sophomore\n");
            break;
        case 3:
            printf("Year: Junior\n");
            break;
        case 4:
            printf("Year: Senior\n");
            break;
        default:
            break;
    }
}

int main() {

    struct student *studentPtr = malloc(sizeof(struct student));

    printf("Enter the student's name: \n");
    scanf("%[^\n]s", &*studentPtr->name);
    printf("Enter the student's age: \n");
    scanf("%d", &studentPtr->age);
    printf("Enter the student's year: \n");
    scanf("%d", &studentPtr->year);

    display(studentPtr);
    studentPtr->age++;
    if (studentPtr->year != 4){
        studentPtr->year++;
    }
    display(studentPtr);

    free(studentPtr);
    return 0;
}