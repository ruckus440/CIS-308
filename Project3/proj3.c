#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Declare methods
//Sort lists
void VerticalSort();
//Sort rows
void HorizontalSort();
//Print
void Print();

int main(int argc, char *argv []) {

    FILE *fp;
    char *filename;
    int numOfLists;

    filename = (char *) malloc(sizeof(char) * 15);
    strcpy(filename, argv[1]); //takes argument file to run
    fp = fopen(filename, "r");
    fscanf(fp, "%d", &numOfLists);

    //ok to remove this
    printf("\nThere are %d lists in this document: \n\n", numOfLists);


    return 0;
}

//sort lists
void VerticalSort(int numRows)
{

}

//sort rows
void HorizontalSort()
{

}

//print
void Print()
{

}