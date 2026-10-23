#include <stdio.h>

int main(void)
{
    int arr1[] = {5,6,7,8};
    int arr2[] = {1,2,3,4};

    int arr1start = 0, arr2start =0;
    int arr1end = sizeof(arr1)/sizeof(arr1[0]);
    int arr2end = sizeof(arr2)/sizeof(arr2[0]);
    int arr[arr1end + arr2end];
    int i =0;

    while(arr1start < arr1end && arr2start < arr2end){

        if(arr1[arr1start] <= arr2[arr2start]){
            arr[i] = arr1[arr1start];
            i++;
            arr1start++;
        }else{
            arr[i] = arr2[arr2start];
            i++;
            arr2start++;
        }
    }

    while (arr1start < arr1end)
    {
        arr[i]= arr1[arr1start];
        i++;
        arr1start++;
    }

    while (arr2start < arr2end)
    {
        arr[i] = arr2[arr2start];
        arr2start++;
        i++;   
    }
    int arrsize = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < arrsize; i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
    

    return 0;
}