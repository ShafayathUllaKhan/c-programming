#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int n;
    int sum = 0;
    printf("Enter the size of the array\n");
    scanf("%d",&n);

    int *arr = malloc(n * sizeof(int));

    if(arr == NULL){
        printf("Memory allocation failed \n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of %d index: ",i);
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    
    printf("sum = %d\n",sum);

    free(arr);

    return 0;
}