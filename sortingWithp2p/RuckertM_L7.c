#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void printArray(char * array[], int size);
void stringsort(char * strings[], int nstrings, int (*cmpfun)());
int dictstrcmp(char * str1, char *str2);
int numstrcmp(char * str1, char * str2);

int main() {

    char * array1[] = {"Zeppelin", "able", "baker", "Charlie"};
    char * array2[] = {"1", "234", "12", "3", "4", "24", "2"};

    printArray(array1, 4);
    stringsort(array1, 4, strcmp);
    printArray(array1, 4);

    printf("\n----dicstrcmp------\n");
    printArray(array1, 4);
    stringsort(array1, 4, dictstrcmp);
    printArray(array1, 4);

    printf("\n----Nums strcmp------\n");
    printArray(array2, 7);
    stringsort(array2, 7, strcmp);
    printArray(array2, 7);

    printf("\n----num numstrcmp------\n");
    printArray(array2, 7);
    stringsort(array2, 7, numstrcmp);
    printArray(array2, 7);





    return 0;
}

int numstrcmp(char * str1, char * str2)
{
    int n1 = atoi(str1);
    int n2 = atoi(str2);

    if(n1 < n2)
    {
        return -1;
    }
    else if(n1 == n2)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

void stringsort(char * strings[], int nstrings, int (*cmpfun)())
{
    int i, j;
    int didswap;

    do {
        didswap = 0;
        for(i = 0; i < nstrings-1; i++)
        {
            j = i+1;
            if((*cmpfun)(strings[i], strings[j]) > 0)
            {
                char * temp = strings[i];
                strings[i] = strings[j];
                strings[j] = temp;
                didswap = 1;
            }
        }

    } while(didswap);
}

int dictstrcmp(char * str1, char *str2)
{
    while(1)
    {
        char c1 = *str1++;
        char c2 = *str2++;

        if(isupper(c1))
        {
            c1 = tolower(c1);
        }

        if(isupper(c2))
        {
            c2 = tolower(c2);
        }
        if(c1 != c2)
        {
            return c1 - c2;
        }
        if(c1 == '\0')
        {
            return 0;
        }
    }
}


void printArray(char * array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%s ", array[i]);
    }
    printf("\n");
}