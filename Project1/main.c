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
int validateSequence (char sequence[]);
int isOpenParenthesis (char);
int isClosingParenthesis (char);


int validateSequence (char sequence[]) {

    int checkPos = 1;
    //alogrithm goes here
    for (int i = 1; i < strlen(sequence); i++) {
        if (sequence[i] == ")" || sequence [i] == "]" || sequence[i] == "}") {
            
        }

    }
    return valid;
}

int main(int argc, char *argv []) {

    FILE *fp;
    int numOfExpressions = 0;
    char *filename;
    char data[50];
    filename = (char *) malloc(sizeof(char) * 15);

    strcpy(filename, argv[1]);

    printf("The file name is: %s\n", filename);

    fp = fopen(filename, "r");

    fscanf(fp, "%d", &numOfExpressions);
    printf("There are %d lines in this document: \n", numOfExpressions);

    if (fp != NULL) {
        while (fgets(data, 35, fp) != NULL) {
            printf("%s", data);
        }
        printf("\n");
    }

    printf("File closed.\n");
    fclose(fp);
    return 0;
}