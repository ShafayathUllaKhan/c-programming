#include <stdio.h>

int pivot(int arr[], int low, int high){

    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i <= j){
        while (arr[i] <= pivot && i<= high)
        {
            i++;
        }
        while(arr[j] > pivot && j>= low ){
            j--;
        }

        if(i<=j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        
    }
    if(j<i){
        int temp = arr[low];
        arr[low] = arr[j];
        arr[j] = temp;
    }
    return j;
}

void quicksort(int arr[],int low,int len){

    if(low >= len){
        return;
    }
    int partition = pivot(arr,low,len);
    quicksort(arr,low,partition-1);
    quicksort(arr,partition+1,len);
}

int main(void)
{
    int arr[] = {3,2,1};
    int arrsize = sizeof(arr)/sizeof(arr[0]);

    quicksort(arr,0,arrsize-1);

    for(int i=0;i< arrsize;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0;
}