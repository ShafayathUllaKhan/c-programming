#include <stdio.h>
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

    


}

int main(void)
{
    int **arr = NULL;
    int rows, cols;
    long long largest;

    if(!takeInput(&arr, &rows, &cols)){
        return 1;
    }
    return 0;
}