#include <stdio.h>

int* increment(int arr[],int size){

    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i] + 2;
    }

    return arr;
    
}

int main(void)
{
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    increment(arr,size);

    for(int i=0;i<size;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}