#include <stdio.h>

int main(void)
{
    // declaring a variable
    int a;

    // declaring an array
    // in c local arrays are not automatically initialized to 0.
    int arr[10] = {0};

    // Array initialization
    int arr1[] = {1,2,3,4,5};

    // declaring an array
    int arr2[5];

    // for-each equivalent in c
    printf("%zu\n",sizeof(arr1)); // size of returns size_t values that why %zu

    int size = sizeof(arr1)/sizeof(arr1[0]);
    printf("%d\n",size);

    for(int i=0;i<size;i++){
        printf("%d\n",arr1[i]);
    }
    return 0;
}