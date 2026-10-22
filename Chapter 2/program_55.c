#include <stdio.h>

int selection_sort(int arr[],int size){
    for (int i = 0; i <= size-2; i++)
    {
        int min = i;
        for(int j=i;j<=size-1;j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    printf("selection sort : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 1;
}

int bubblesort(int arr[],int size){
    for (int i = 0; i < size-1; i++)
    {
        int didSwap = 0;
        for (int j = 0; j < size-1-i; j++)
        {
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                didSwap = 1;
            }
        }
        if (didSwap == 0)
        {
            break;
        }
        
    }
    printf("bubble sort : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 1;
}

int insertionsort(int arr[],int size){
    for (int i = 0; i <= size-1; i++)
    {
        int j = i;
        while (j > 0 && arr[j]<arr[j-1])
        {
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
        
    }
    printf("insertion sort : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
}

int main(void)
{
    int arr[] = {32, 15, 34, 23, 12, 19};
    int size = sizeof(arr)/sizeof(arr[0]);
// in selection sort the steps are get the minimum and swap
// in bubble sort maximum number is pushed to the last
// 

    selection_sort(arr,size);
    bubblesort(arr,size);// if the array is sorted the time complexity of bubble sort is big o of n but code needs to be optimize
    insertionsort(arr,size);// takes an element and places to its correct position
    return 0;
}