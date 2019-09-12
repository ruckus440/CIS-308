/**********************************************
* Name: Mike Ruckert *
* Date: 9/12/2019 *
* Assignment: Project 1 - Sequence and Order validation *
***********************************************
* This program verifies that an arithmetic sequence of parentheses is balanced.
 * It reads text line by line from a .txt file.  It gets the number of sequences.
 * Then it loops that number of times through the file, reading sequences line by line.
 * If it encounters an open parentheses it adds them to an array.  If it encounters
 * a close parentheses, it varifies that the last character in the array of open
 * parentheses matches that particular parentheses.  If so, the open array index is
 * decremented.  If not, the function exits and the result is printed.*
***********************************************/
/**********************************************
* Description: *
* Input: A .txt file with an int indicating the number of sequences followed by that number of sequences. *
* Output: Prints to the console the sequence followed by the the result of validating the sequence. *
***********************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int valid; //boolean indicator
int checkExpression(char[]); //function declaration
char sequence[35]; //stores the sequence read from file

int checkExpression(char input[])
{
    char stack[35]; //array to hold open parentheses
    int stackIndex = 0; //index to keep track of position in stack[]
    int length = strlen(input); //gets length of the input sequence for loop sentinel

    for (int i = 0; i < length; i++) //begin loop validate line from file
    {
        if (input[i] == '(' || input[i] == '{' || input[i] == '[') //if reads an open parentheses...
        {
            stack[stackIndex] = input[i]; //...add it to stack[]...
            stackIndex++; //...and increment our index
        }
        else if (input[i] == ')') //if read a close parentheses...
        {
            if (stack[stackIndex - 1] == '(') //...if the previous parentheses matches...
            {
                stackIndex--; //...decrement the index
            }
            else
            {
                printf("Found an unmatched parentheses\n"); //Print the result
                return 0;
            }
        }
        else if (input[i] == '}') //case for other close parentheses
        {
            if (stack[stackIndex - 1] == '{')
            {
                stackIndex--;
            }
            else
            {
                printf("Found an unmatched parentheses\n");
                return 0;
            }
        }
        else if (input[i] == ']') //case for other close parentheses
        {
            if (stack[stackIndex - 1] == '[')
            {
                stackIndex--;
            }
            else
            {
                printf("Found an unmatched parentheses\n");
                return 0;
            }
        }
    }
    printf("The sequence is balanced\n"); //prints the result if all are matched
    return 1; //indicates true value
}

int main(int argc, char *argv []) {

    FILE *fp;
    int numOfExpressions; //stores number of lines to validate
    char *filename;
    filename = (char *) malloc(sizeof(char) * 15);
    strcpy(filename, argv[1]); //takes argument file to run
    fp = fopen(filename, "r");
    fscanf(fp, "%d", &numOfExpressions);
    printf("\nThere are %d lines in this document: \n\n", numOfExpressions);

    if (fp != NULL)
    {
        for (int i = 0; i < numOfExpressions; i++)
        {
            fscanf(fp, "%s", sequence); //scans the sequence line from file
            printf("%s - ", sequence); //prints the sequence
            valid = checkExpression(sequence); //runs the sequence through the validating function
            if (valid) //prints more info indicating if sequence is valid
            {
                printf(" - correct\n");
            }
            else
                {
                printf(" - incorrect\n");
                }
        }
        printf("\n");
    }

    fclose(fp); //close the input file
    return 0;
}