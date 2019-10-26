#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Declare methods
//Sort lists
void VerticalSort();
//Sort rows
void HorizontalSort();
//Print
void Print(int List[], int numLists, int **ListArray);

int main(int argc, char *argv []) {

    FILE *fp;
    char *filename;
    int numOfLists;
    int **ListArray;
    int *List;
    char list[50];
    int listLen, column;
    int row = 0;
    char *strLine;

    filename = (char *) malloc(sizeof(char) * 15);
    strcpy(filename, argv[1]); //takes argument file to run
    fp = fopen(filename, "r");


    ListArray = malloc(numOfLists * sizeof(int*));
    List = malloc(numOfLists * sizeof(int));

    fscanf(fp, "%d", &numOfLists);



    //read file
    while (fgets(list, sizeof(list), fp) != NULL)
    {


        listLen = atoi(strtok(list, ":"));
        List[row] = listLen;
        ListArray[row] = malloc(listLen * sizeof(int));
        for (int i = 0; i < listLen; i++)
        {
            ListArray[row][column] = atoi(strtok(NULL, ","));
        }
        HorizontalSort(ListArray[row++], listLen);

    }
    fclose(fp);

    //sort vertical
    VerticalSort(ListArray, numOfLists, List);

    //sort horizontal

    //print
    Print(List, numOfLists, ListArray);




    //free memory

    return 0;
}

//sort lists
void VerticalSort(int *ListArray, int numRows, int *List)
{
    int *tempPtr;
    int temp;

    for (int i = 0; i < numRows - 1; i++)
    {
        for (int j = 0; j < numRows; j++)
        {
            if (List[i] > List[j])
            {
                temp = List[i];
                List[i] = List[j];
                List[j] = temp;
                tempPtr = ListArray[i];
                ListArray[i] = ListArray[j];
                ListArray[j] = tempPtr;
            }
        }
    }

}

//sort rows
void HorizontalSort()
{

}

//print
void Print(int List[], int numLists, int **ListArray)
{
    printf("\n%d lists:\n\n", numLists);
    for (int i = 0; i < numLists; i++)
    {
        for(int j = 0; j < List[i]; j++)
        {
            printf("%d ", ListArray[i][j]);
        }
        printf("\n");
    }
}