#include <stdio.h>
#include <string.h>
#include <ctype.h>

int toUpper();
int reversePrint();

int toUpper(char name[]){
    int count;
    char *x = name;
    while (*x != '\0'){
        *x = toupper(*x);
        *x++;
    }
}

int reversePrint(char name[]){
    char *x;


}

int main() {

    char name1[] = "John Smith";
    char name2[] = "Mary Cohen";
    char name3[] = "Carl Williams";

    toUpper(name1);

    printf("%s\n", name1);





    printf("Hello, World!\n");
    return 0;
}