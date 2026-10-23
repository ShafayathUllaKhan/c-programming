#include <stdio.h>
#include <stdlib.h>
int takeInput(int ***arr,int *rows,int *cols){
    printf("Enter number of rows: ");
    if(scanf("%d",rows)!=1 || *rows <= 0){
        fprintf(stderr,"Invalid number of rows.\n");
        return 0;
    }
//     scanf() returns the number of values it successfully reads and assigns.
// - If the user enters 5, it returns 1.
// - If the user enters abc, it returns 0 because it cannot read an integer.
// - If input ends before a value can be read, it can return EOF.

    printf("Enter number of columns: ");
    if(scanf("%d", cols)!= 1 || *cols <= 0){
        fprintf(stderr,"Invalid number of columns.\n");
        return 0;
    }

    // allocate the row pointer
    *arr = malloc((size_t)*rows * sizeof(**arr));
    if (*arr == NULL){
         fprintf(stderr, "Memory allocation failed.\n");
        return 0;
    }

    // allocate each row
     for (int i = 0; i < *rows; i++) {
        (*arr)[i] = malloc((size_t)*cols * sizeof *(*arr)[i]);

        if ((*arr)[i] == NULL) {
            for (int k = 0; k < i; k++) {
                free((*arr)[k]);
            }
            free(*arr);
            *arr = NULL;
            fprintf(stderr, "Memory allocation failed.\n");
            return 0;
        }
    }

    // Read the matrix values
    for (int i = 0; i < *rows; i++) {
        printf("Enter elements for row %d:\n", i);

        for (int j = 0; j < *cols; j++) {
            if (scanf("%d", &(*arr)[i][j]) != 1) {
                fprintf(stderr, "Invalid matrix element.\n");

                for (int k = 0; k < *rows; k++) {
                    free((*arr)[k]);
                }
                free(*arr);
                *arr = NULL;
                return 0;
            }
        }
    }

    return 1;
}

void printArray(int **arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}


int longestCol(const int * const *arr, int rows, int cols,
               long long *largest) {
    if (rows <= 0 || cols <= 0) {
        return 0;
    }

    *largest = 0;

    for (int j = 0; j < cols; j++) {
        long long sum = 0;

        for (int i = 0; i < rows; i++) {
            sum += arr[i][j];
        }

        if (j == 0 || sum > *largest) {// j == 0 is very import if negative value is greater in o column then in will go into if condition
            *largest = sum;
        }
    }

    return 1;
}

int main(void)
{
    int **arr = NULL;
    int rows, cols;
    long long largest;

    if(!takeInput(&arr, &rows, &cols)){
        return 1;
    }
    printf("\nMatrix:\n");
    printArray(arr, rows, cols);

    if (longestCol((const int * const *)arr, rows, cols, &largest)) {
        printf("Largest column sum: %lld\n", largest);
    }

    for (int i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);
    return 0;
}