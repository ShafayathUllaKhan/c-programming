#include <stdio.h>

int main(void)
{
//     In C, your code will fail to compile with an error like: "array type has incomplete element type" or "declaration of 'a' as multidimensional array must have bounds for all dimensions except the first".

// The Rule for 2D Arrays in C

// When you initialize a 2D array, you must specify the size of the columns (the second brackets). The row size (the first brackets) is the only one the compiler can calculate automatically.
// c
// int a[][4] = {  // ⬅️ You must put '4' here!
//     {1, 2, 3, 4},
//     {5, 6, 7, 8},
//     {9, 10, 11, 12}
// };
// Use code with caution.

// Why does the compiler require this?

// Computer memory is strictly linear (one long row of bytes). To store a 2D array, the compiler flattens it out in memory like a single line of numbers: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12.
// If you write a[1][2] (which points to 7), the compiler needs to jump past the first row to get to the second row. It uses a mathematical formula to find that exact memory location:
// address = base address + (Row Index * column size) + column Index

    int a[][3] = {
        {1, 2, 3},
        {5,6,7},
        {9,10,11},
        {12,13,14}
    };

    int rows = sizeof(a)/sizeof(a[0]);// 3 rows
    int cols = sizeof(a[0])/sizeof(a[0][0]);// 4 cols

    int left = 0;
    int top = 0;
    int right = cols - 1;
    int bottom = rows - 1;
    
    while(top <= bottom && left <= right){
        for (int i = left; i <= right; i++)
        {
            printf("%d ",a[top][i]);
        }

        for (int i = top+1; i <= bottom; i++)
        {
            printf("%d ",a[i][right]);
        }

        for (int i = right-1; i >= top; i--)
        {
            if(left == right){
                break;
            }
            printf("%d ",a[bottom][i]);
        }
        


        for (int i = bottom-1; i > top; i--)
        {
            if(top == bottom){
                break;
            }
            printf("%d ",a[i][top]);
        }
        
        left++;
        bottom--;
        right--;
        top++;

    }
    return 0;
}