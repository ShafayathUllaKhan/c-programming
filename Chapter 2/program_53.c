#include <stdio.h>
// binary search which is logn

int binary_search(int arr[],int low,int high,int target){
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target){
            return mid;
        }

        if(arr[low] <= arr[mid]){
            if(arr[low] <= target && target <= arr[mid]){
                high = mid -1;
            }else{
                low = mid + 1;
            }
        }else{
            if(arr[mid] <= target && target <= arr[high]){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
    }
}
int main(void)
{
    int arr[] = {3,4,5,6,7,0,1,2};
    int target = 1;
    int size = sizeof(arr)/sizeof(arr[0]);
    int low = 0, high = size-1;

    int result = binary_search(arr,low,high,target);

    if(result != -1){
        printf("the index is %d\n",result);
    }else{
        printf("element not found.\n");
    }
    return 0;
}