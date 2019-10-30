
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*
 * This program:
 * 1- Stores some city names in an dynamic array.
 * 2- The names are stored in memory allocated dynamically for the exact number of 
bytes (strlen) required by the city name
 * 3- It can print the city names in three different formats, depending on the 
user's selection
 * 4- Once the user selects the option, the function should be called dynamically
 * 5- See menu below for restrictions for each function
 */

void printAsIs(char** cities, int numOfCities);
void printUpper(char** cities, int numOfCities);
void printReverse(char** cities, int numOfCities);

int main() {

    typedef void (*printCitiesFunction)();

    const int NUMOFCITIES = 3;
    char** cities = (char*)malloc(sizeof(char)*NUMOFCITIES);
    char tempCityName[50];
    printCitiesFunction printFun;

    for (int i = 0; i < NUMOFCITIES; i++)
    {
        printf("City %d name: ", i);
        scanf("%s", tempCityName); getchar();
        cities[i] = malloc(sizeof(char)*strlen(tempCityName));
        strcpy(cities[i], tempCityName);
    }



    printf("Select a format to print Cities\n");
    printf("1- As Is\n"); // As the user typed it
    printf("2- All Caps\n"); // (i) Use toupper to convert each character at the time (ii) do NOT use strlen()
    printf("3- Reverse\n"); // (i)  You can use strlen()
    printf("What format to print?\n");
    char selection = getchar();
    switch (selection)
    {
        case '1':
            printFun = printAsIs;
            break;
        case '2':
            printFun = printUpper;
            break;
        case '3':
            printFun = printReverse;
            break;
        default:
            printf("No an option\n");
    }
    (*printFun)(cities, NUMOFCITIES);

    getchar();
    return 0;
}

void printAsIs(char** cities, int numOfCities)
{
    for (int i = 0; i < numOfCities; i++)
    {
        printf("%s\n", cities[i]);
    }
}


void printUpper(char** cities, int numOfCities)
{
    for (int i = 0; i < numOfCities; i++)
    {
        int k = 0;
        while (cities[i][k] != '\0')
        {
            char c = toupper(cities[i][k]);
            printf("%c", c);
            k++;
        }
        printf("\n");
    }
    int i = 0;
}

void printReverse(char** cities, int numOfCities)
{
    char c;
    for(int i = numOfCities-1; i >=0; i--)
    {
        int j = 0;
        c = cities[i][0];
        while(c != '\0')
        {
            j++;
            c = cities[i][j];
        }
        while(j >= 0)
        {
            printf("%c", cities[i][j]);
            j--;
        }
        printf("\n");
    }

}






