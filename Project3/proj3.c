#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Declare methods
//Sort lists
void VerticalSort();
//Sort rows
void HorizontalSort();
//Print
void Print(int numLists);

int main(int argc, char *argv []) {

    FILE *fp;
    char *filename;
    int numOfLists;
    int **ListArray;
    int *List;
    char list[50];
    int listLen, column;
    int row = 0;

    filename = (char *) malloc(sizeof(char) * 15);
    strcpy(filename, argv[1]); //takes argument file to run
    fp = fopen(filename, "r");
    fscanf(fp, "%d", &numOfLists);

    ListArray = malloc(numOfLists * sizeof(int*));
    List = malloc(numOfLists * sizeof(int));

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

    //sort horizontal

    //print
    Print(numOfLists);



    //free memory

    return 0;
}

//sort lists
void VerticalSort(int numRows, int *List)
{
    int *tempPtr;

    for (int i = 0; i < numRows - 1; i++)
    {
        for (int j = 0; j < numRows; j++)
        {
            if (List[i] > List[j])
            {
                tempPtr = List[i];

            }
        }
    }

}

//sort rows
void HorizontalSort()
{

}

//print
void Print(int numLists, )
{
    printf("\n%d lists:\n\n", numLists);
    for (int i = 0; i < numLists; i++)
    {
        for(int j = 0; j < )
    }


}