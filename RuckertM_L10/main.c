#include <stdio.h>
#include <stdlib.h>

void matrixAllocate(int rows, int columns, int *** mptr);
void displayMptr(int **mat, int rows, int columns);
void swapColumns(int **, int, int, int, int);

int main() {

    int** matrix;

    matrixAllocate(4, 4, &matrix);

    int count = 1;
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++)
            matrix[i][j] = count++;
    }

    displayMptr(matrix, 4, 4);

    swapColumns(matrix, 4, 4, 1, 3);

    printf("\n");
    displayMptr(matrix, 4, 4);

}

void matrixAllocate(int rows, int columns, int *** mptr)
{
    *mptr = (int**)malloc(rows * sizeof(int*));
    int i = 0;
    for (i = 0; i < rows; i++){
        (*mptr)[i] = malloc(columns * sizeof(int));
    }
}

void displayMptr(int **mat, int rows, int columns) {

    int i, j;

    for (i = 0; i <  rows; i++) {
        printf("\n");
        for (j = 0; j < columns; j++)
            printf("%4.2d", mat[i][j]);
    }
}

void swapColumns(int ** arr, int rows, int columns, int i, int j)
{
    int r, temp;
    for (r = 0; r < rows; r++){
        temp = *(*(arr+r)+i);
        *(*(arr+r)+i) = *(*(arr+r)+j);
        *(*(arr+r)+j) = temp;
    }
}
