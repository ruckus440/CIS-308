/**********************************************
* Name: Mike Ruckert *
* Date: 9/8/2019 *
* Assignment: Project 1 - Sequence and Order validation *
***********************************************
* (WRITE A DESCRIPTION OF THE PROGRAM) *
***********************************************/
/**********************************************
* Description: *
* Input: *
* Output: *
***********************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int valid = 1;
char openParentheses[35];
int validateSequence (char[]);
char sequence[35];
int checkPos;


int validateSequence (char seq[]) {

    checkPos = 0;
    //alogrithm goes here
    for (int i = 0; i < strlen(seq); i++) {
        /*
        if (seq[i] == '(' || seq [i] == '[' || seq[i] == '{') {
            openParentheses[i] = seq[i];
        }
        if (seq[i] == ')') {
            if (openParentheses[i-checkPos] == '('){
                checkPos--;
            }
            else {
                valid = 0;
                break;
            }
        }
        if (seq[i] == ']') {
            if (openParentheses[i-checkPos] == '['){
                checkPos--;
            }
            else {
                valid = 0;
                break;
            }
        }
        if (seq[i] == '}') {
            if (openParentheses[i-checkPos] == '{'){
                checkPos--;
            }
            else {
                valid = 0;
                break;
            }
        }
         */

        if (seq[i] == '(' || seq[i] == '[' || seq[i] == '{') {
            openParentheses[i] = seq[i];
        }
        //printf(openParentheses);
        //printf("\n");

        for (int i = 0; i < strlen(seq); i++) {
            if (seq[i] == ')') {
                if (openParentheses[i-1] != '('){
                    valid = 0;
                    break;
                }
            }
            if (seq[i] == ']') {
                if (openParentheses[i-1] != '['){
                    valid = 0;
                    break;
                }
            }
            if (seq[i] == '}') {
                if (openParentheses[i-1] != '{'){
                    valid = 0;
                    break;
                }
            }
        }
    }
    return valid;
}

int main(int argc, char *argv []) {

    FILE *fp;
    int numOfExpressions = 0;
    char *filename;
    char fileData[50];
    filename = (char *) malloc(sizeof(char) * 15);

    strcpy(filename, argv[1]);

    printf("The file name is: %s\n", filename);

    fp = fopen(filename, "r");

    fscanf(fp, "%d", &numOfExpressions);
    printf("There are %d lines in this document: \n", numOfExpressions);

    if (fp != NULL) {

        for (int i = 0; i < numOfExpressions; i++) {
            fscanf(fp, "%s", sequence);
            printf("%s", sequence);
            validateSequence(sequence);
            if (valid) {
                printf(" - correct\n");
            } else {
                printf(" - incorrect\n");
            }
        }
        /*
        while (fgets(fileData, 35, fp) != NULL) {
            printf("%s", fileData);
        }
         */

        printf("\n");

    }



    printf("File closed.\n");
    fclose(fp);
    return 0;
}