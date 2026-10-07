#include <stdio.h>
#include <limits.h>
int main(void)
{
    int arr[5];

    for(int i=0;i<5;i++){
        printf("enter the value of %d\n",i);
        scanf("%d",&arr[i]);
    }

    int largest = INT_MIN;

    for(int i=0;i<5;i++){
        if(largest < arr[i]){
            largest = arr[i];
        }
    }

    // find second largest

    int max_1 = arr[0];
    int max_2 = INT_MIN;

    for (int i = 0; i < 5; i++)
    {
        if(max_1 < arr[i+1]){
            max_2 = max_1;
            max_1 = arr[i];
        }else if (max_2 < arr[i+1] && arr[i+1] != max_1)
        {
            max_2 = arr[i+1];
        }
        
    }
    printf("The largest number is %d\n",largest);
    printf("The second largest number is %d\n",max_2);
    return 0;
}