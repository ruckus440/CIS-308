/*
 * Mike Ruckert
 * CIS 308 - Lab 3
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int toUpper();
char reversePrint();

/*
 * Pre-condition - the name array as written
 * Post-condition - the name array with all characters capitalized
 */
int toUpper(char name[]){
    char *x = name;
    while (*x != '\0'){
        *x = toupper(*x);
        *x++;
    }
}

/*
 * Pre-condition - the character array as written
 * Post-condition - the character array is printed out in reverse order using
 */
char reversePrint(char name[]){
    char *ptr = name;
    int arrayLength = strlen(name);

    for (int i = 0; i < arrayLength-1; i++) {
        ptr++;
    }
    for (int i = 0; i < arrayLength; i++) {
        printf("%c", *ptr);
        ptr--;
    }
    printf("\n");
}

int main() {

    char name1[] = "John Smith";
    char name2[] = "Mary Cohen";
    char name3[] = "Carl Williams";

    toUpper(name1);
    toUpper(name2);
    toUpper(name3);

    reversePrint(name1);
    reversePrint(name2);
    reversePrint(name3);

    return 0;
}