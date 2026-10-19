#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int row0[] = {1,2,3};
    int row1[] = {4,5,6,7,8,9};

    int *Arr2[] = {
        row0,row1
    };

    printf("%zu\n",sizeof(Arr2));// sizeof returns size_t number so zu
//     The compiler calculates sizeof(Arr2) as:
// Number of elements × Size of a single pointer
// • On a 64-bit (modern) system: Pointers are 8 bytes each.
// \(2\times 8\text{\ bytes}=\mathbf{16}\)

    int rowCount = sizeof(Arr2)/sizeof(Arr2[0]);

    for(int i =0 ; i< rowCount;i++){
        int colCount = (i==0) ? sizeof(row0) / sizeof(row0[0]) : sizeof(row1) / sizeof(row1[0]);

        for (int j=0; j < colCount; j++){
            printf("%d ",Arr2[i][j]);
        }
        printf("\n");
    }

    // create three row pointers, initially NULL
    int **Arr = calloc(3, sizeof(*Arr));

    if(Arr == NULL){
        fprintf(stderr, "Memory allocation failed.\n");
        return 1;
    }

    printf("%p\n",(void *)Arr[0]);// (nil) It represents address zero (0x0 or 0x00000000), which means the pointer is empty and does not point to any valid memory location.
    printf("%p\n",(void *)Arr[1]);
    printf("%p\n",(void *)Arr[2]);

    // Allocate each row seprately
    Arr[0] = calloc(5, sizeof(*Arr[0]));
    Arr[1] = calloc(7, sizeof(*Arr[1]));
    Arr[2] = calloc(10,sizeof(*Arr[2]));

    printf("%p\n",(void *)Arr[0]);
    printf("%p\n",(void *)Arr[1]);
    printf("%p\n",(void *)Arr[2]);

    free(Arr[0]);
    free(Arr[1]);
    free(Arr[2]);
    free(Arr);
    return 0;
}