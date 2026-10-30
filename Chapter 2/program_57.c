#include <stdio.h>
// merge to sorted arrays with out extra array
int sort(int arr[],int n){
    for (int i = 0; i <= n; i++)
    {
        int smallest = i;
        for (int j = i; j <= n-1; j++)
        {
            if ( arr[j] > arr[j+1]){
                smallest = j+1;
            }
        }
        int temp = arr[i];
        arr[i] = arr[smallest];
        arr[smallest] = temp;
    }
    return 0;
}

int main(void)
{
    int arr1[] = {1,3,5,7};
    int arr2[] = {0,2,6,8,9};

    int left = 0, right = 0;
    int leftend = sizeof(arr1)/sizeof(arr1[0]);
    int rightend = sizeof(arr2)/sizeof(arr2[0]);
    leftend = leftend - 1;
    rightend = rightend - 1;

    while (leftend >= 0 && right <= rightend)
    {
        if(arr1[leftend] > arr2[right]){
            int temp = arr1[leftend];
            arr1[leftend] = arr2[right];
            arr2[right] = temp;
            leftend--;
            right++;
        }else{
            break;
        }
    }

    sort(arr1,3);
    sort(arr2,4);

    for (int i = 0; i < 4; i++)
    {
        printf("%d",arr1[i]);
    }
    printf("\n");
     for (int i = 0; i < 5; i++)
    {
        printf("%d",arr2[i]);
    }
    

    
    return 0;
}