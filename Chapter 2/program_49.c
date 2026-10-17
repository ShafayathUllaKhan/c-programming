#include <stdio.h>
#include <stdlib.h>

int takeInput(int ***arr,int *rows,int *cols){

    // scanf failes will give 0 else 1
    printf("enter the number of rows \n");
    if(scanf("%d",&(*rows))!= 1 || *rows <= 0){
        fprintf(stderr,"invalid rows.\n");
        return 0;
    }

    printf("enter the number of columns \n");
    if(scanf("%d",&(*cols))!= 1 || *cols <= 0){
        fprintf(stderr,"invalid columns.\n");
        return 0;
    }

    // allocate the meamory to row pointers

    *arr = (int**)malloc(sizeof(int*) * *rows);

    if(*arr == NULL){
        fprintf(stderr,"meomary allocation failed.\n");
        return 0;
    }

    // allocate each row
    for (int i = 0; i < *rows; i++)
    {
        (*arr)[i] = (int *)malloc(sizeof(int) * *cols);
    }

    // read the matrix values
    for (int i = 0; i < *rows; i++)
    {
        for (int j = 0; j < *cols; j++)
        {
            printf("enter the value of %d row %d column\n",i,j);
            scanf("%d",&(*arr)[i][j]);
        }
        
    }    
    return 1;
}

int printArray(int ***arr,int *rows,int *cols){

    for (int i = 0; i < *rows; i++)
    {
        for (int j = 0; j < *cols; j++)
        {
           printf("%d ",(*arr)[i][j]);
        }
        printf("\n");
    }
    return 0;    
}

int largest1(int ***arr,int *rows,int *cols,long long *largest){

    for (int j = 0; j < *cols; j++)
    {
        long long sum = 0;
        for (int i = 0; i < *rows; i++)
        {
           sum = sum +  (*arr)[i][j];
        }
        if(sum > *largest){
            *largest = sum;
        }
    }
    return 0;    
}


int main(void)
{
    int **arr;
    int rows, cols;
    long long largest;

    if(!takeInput(&arr,&rows,&cols)){
        return 1;
    }

    printArray(&arr,&rows,&cols);

    largest1(&arr,&rows,&cols,&largest);

    printf("the largest is %llu",largest);

    for (int i = 0; i < rows; i++)
    {
        free(arr[i]);
    }

    free(arr);
    

    return 0;
}