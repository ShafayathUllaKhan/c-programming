#include <stdio.h>

int binary_search(const int arr[], size_t size,int target){

    size_t low = 0;
    size_t high = size;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        // check if the target is present at mid
        if(arr[mid] == target){
            return mid;
        }

        // if target is greater, ignore the left half
        if(arr[mid]<target){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    
    return -1;
}

int main(void)
{
    const int arr[] = {1, 2, 5, 7, 12, 33, 34, 54, 78, 87, 90};

    const size_t size = sizeof(arr)/sizeof(arr[0]);

    int target;

    printf("Enter the elements to be searched: ");

    if(scanf("%d",&target) != 1){
        fprintf(stderr, "Invalid input. Please enter an integer.\n");
        return 1;
    }

    int result = binary_search(arr, size, target);

    if(result != -1){
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }
    return 0;
}