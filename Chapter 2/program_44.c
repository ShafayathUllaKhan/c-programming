#include <stdio.h>

int main(void)
{
    // one dimensinal arrays
    int arr[5] = {0}; // All elements initialized to zero
    int arr2[] = {1,2,3,4,5};

    printf("Address of arr: %p\n",(void *)arr);

    printf("arr elements: ");
    for (int i=0;i<5;i++){
        printf("%d",arr[i]);
    }
    printf("\n");

    printf("arr2 elements: ");
    for(int i=0;i<5;i++){
        printf("%d",arr2[i]);
    }
    printf("\n");

    // two - dimensional arrays
    int A[3][4] = {0};
    int B[6][4] = {0};
    int (*c)[4] = NULL;

    // print the address of the first row
    printf("Address of A: %p\n",(void *)A);

    printf("A[0] elements: ");
    for (int j=0;j<4;j++){
        printf("%d",A[0][j]);
    }

    printf("\n");

    // D and E are one-dimensional arrays;
    // F is a two-dimensional array.

    int D[3];
    int E[5] = {0};
    int F[2][4] = {0};

    (void)B;
    (void)c;
    (void)D;
    (void)E;
    (void)F;
    return 0;
}

// The lines (void)B;, (void)c;, (void)D;, (void)E;, and (void)F; are used to explicitly tell the compiler: "I know I created these variables, and I know I am not using them right now, so please do not give me an unused variable warning."
// This technique is called casting a variable to void. It does absolutely nothing when your program runs (it generates zero assembly code), but it acts as a message purely for your compiler.
// Here is the breakdown of why programmers use this:

// 1. Silencing Aggressive Compiler Warnings

// When learning C or writing complex code, you often turn on strict compiler flags (like -Wall or -Wextra). If you declare an array like int D[3]; but don't write any code to read or write to it yet, the compiler will complain:
// text
// warning: unused variable ‘D’ [-Wunused-variable]