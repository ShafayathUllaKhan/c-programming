#include <stdio.h>

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

    return 0;
}