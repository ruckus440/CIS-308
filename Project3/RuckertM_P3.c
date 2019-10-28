/**************************
 * Name: Mike Ruckert
 * Date: 10/27/2019
 * Assignment: Project 3 - Jagged Array I/O with pointers
 * ******************************************************
 * This program takes as a run-time argument a .txt file
 * containing lists of numbers.  It read the file, reads
 * how many lists there are, the length of the list, and
 * the integers in the lists.  It sorts the lists in
 * order of increasing size, and sorts the integers
 * within the lists in ascending order.
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Method prototypes
 */
void VerticalSort(int *ListArray[], int numRows, int *List);
void HorizontalSort(int list[], int numLists);
void Print(int List[], int numLists, int **ListArray);

/*********************************************
 * This takes a .txt file as run-time argument.
 * The first line of the file indicates how many
 * lists are contained in the file.  The first
 * element of each lists indicates how many integers
 * are contained in the list.  The program sorts
 * lists in increasing size, and sorts the content
 * of each list in ascending order.
 *
 * Input: The .txt file specifying how many lists
 * to sort, the length of the lists, and their
 * contents.
 *
 * Output: The lists sorted in increasing size and
 * their contents in ascending order.
 */
int main(int argc, char *argv []) {

    FILE *fp;
    char *filename;
    int numOfLists;
    int **ListArrayDPtr; //holds the address of the array of lists
    int *ListLinePtr; //hold the address of individual lists
    char list[50]; //stores the list before sorting
    int listLen;
    int row = 0;

    /**
     * Open the file
     */
    filename = (char *) malloc(sizeof(char) * 15);
    strcpy(filename, argv[1]);
    fp = fopen(filename, "r");

    /**
     * Get the number of lists and dynamically allocate memory accordingly
     */
    fscanf(fp, "%d", &numOfLists);
    ListArrayDPtr = malloc(numOfLists * sizeof(int*));
    ListLinePtr = malloc(numOfLists * sizeof(int));

    /**
     * This loops works through the file and reads the data in the list array.
     * As it progresses it calls the HorizontalSort method to sort the values
     * within the individual lists.
     */
    while (fgets(list, sizeof(list), fp) != NULL)
    {
        listLen = atoi(strtok(list, ":"));
        ListLinePtr[row] = listLen;
        ListArrayDPtr[row] = malloc(listLen * sizeof(int));
        for (int i = 0; i < listLen; i++)
        {
            ListArrayDPtr[row][i] = atoi(strtok(NULL, ","));
        }
        HorizontalSort(ListArrayDPtr[row++], listLen);
    }
    fclose(fp);

    /**
     * Calls the VerticalSort method
     */
    VerticalSort(ListArrayDPtr, numOfLists, ListLinePtr);

    /**
     * Calls the print method for output
     */
    Print(ListLinePtr, numOfLists, ListArrayDPtr);

    /**
     * Free up memory
     */
    free(ListArrayDPtr);
    free(ListLinePtr);

    return 0;
}

/**
 * This method sorts the lists in the file in ascending order
 * according to the number of items in each list.
 * @param ListArray
 * @param numRows
 * @param List
 */
void VerticalSort(int *ListArray[], int numRows, int *List)
{
    int *tempPtr;
    int temp;

    for (int i = 0; i < numRows - 1; i++)
    {
        for (int j = i + 1; j < numRows; j++)
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

/**
 * This method sorts the values in each list in ascending order.
 * @param list
 * @param numLists
 */
void HorizontalSort(int list[], int numLists)
{
    int temp;

    for(int i = 0; i < numLists; i++)
    {
        for(int j =  i + 1; j < numLists; j++)
        {
            if(list[i] > list[j])
            {
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
    }
}

/**
 * Method for printing the sorted lists.
 * @param List
 * @param numLists
 * @param ListArray
 */
void Print(int List[], int numLists, int **ListArray)
{
    printf("\n%d lists:\n", numLists);
    for (int i = 0; i < numLists + 1; i++)
    {
        for(int j = 0; j < List[i]; j++)
        {
            printf("%d ", ListArray[i][j]);
        }
        printf("\n");
    }
}