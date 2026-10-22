#include <stdio.h>

int linear_search(int arr[], int size, int target){

    for (int i = 0; i < size; i++)
    {
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(void)
{
    int arr[] = {5, 7, 1, 2, 33, 90, 87, 54, 12, 34, 78};

    int size_of_array = sizeof(arr) / sizeof(arr[0]);

    int target;

    printf("Enter the elements to be searched: ");

    if(scanf("%d",&target) != 1){
        fprintf(stderr, "Invalid input. Please enter an integer.\n");
        return 1;
    }

    int result = linear_search(arr, size_of_array, target);

    if(result){
        printf("element found at %d",result);
    }else{
        printf("element did not found");
    }
    return 0;
}