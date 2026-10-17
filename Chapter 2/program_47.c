#include <stdio.h>
#include <stdlib.h>
void print1DArray(int *arr1,int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr1[i]);
    }
    printf("\n");
}


int main(void)
{
    int n=5,c=4;
    int *arr1 = (int *)malloc(n*sizeof(int));
    // if malloc fails it will return null
    if(arr1 == NULL){
        printf("meomary allocation failed!\n");
        return 1;
    }

   

    // set the values
    arr1[0] = 30;
    arr1[1] = 100;
    arr1[2] = 37;
    arr1[3] = 41;
    arr1[4] = 90;

     printf("%d\n",*arr1);

    // print the array
    print1DArray(arr1,n);

    int **arr = (int**)malloc(n*sizeof(int *));

    for(int i=0;i<n;i++){
        arr[i] = (int *)malloc(c*sizeof(int));
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<c;j++){
            arr[i][j] = 1;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<c;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++)
    {
        free(arr[i]);
    }

    free(arr);
    

    return 0;
}