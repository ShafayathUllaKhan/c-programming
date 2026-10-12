// push 0 to end
#include <stdio.h>

void pushZero(int arr[],int len){
    int z = 0;
    for (int i = 0; i < len; i++)
    {
        if(arr[i] != 0){
            int temp = arr[z];
            arr[z] = arr[i];
            arr[i] = temp;
            z++;
        }
    }
    
}
int main(void)
{
    int len;
    printf("enter the capacity of the array : \n");
    scanf("%d",&len);

    if(len < 0){
        printf("Invalid array capacity \n");
        return 1;
    }

    int arr[len];

    for(int i=0;i< len;i++){
        printf("enter the of %d index",i);
        scanf("%d",&arr[i]);
    }

    pushZero(arr,len);

    for(int i=0;i<len;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}