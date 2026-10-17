#include <stdio.h>
// 2d array into 1d array or 1d array into 2d array
int main(void)
{
    int arr[3][4] = {
        {14, 11, 3, 93},
        {4, 20, 8, 67},
        {100, 38, 41, 56}
    };

    int row = 3;
    int col = 4;

    int *arr1 = (int *)malloc(sizeof(int)*row*col);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            int x = i*col + j;// important formula
            arr1[x] = arr[i][j];
        }
    }

    free(arr);
    return 0;
}