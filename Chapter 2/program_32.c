#include <stdio.h>
// rotate array from number of rotation with reverse function
int reverse(int arr[],int l,int r){

    while(l < r){
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        l++;
        r--;
    }
    return 0;
}

int main(void)
{
    int len;
    printf("Enter the capacity of the array: \n");
    scanf("%d",&len);

    if(len <=  0){
        printf("Invalid array capacity.\n");
        return 1;
    }

    int arr[len];

    for(int i=0;i<len;i++){
        printf("enter the value of %d elements in the array: \n",i);
        scanf("%d",&arr[i]);
    }

    int dir, x;

    printf("Enter '1' to rotate right and '0' to rotate left: ");
    scanf("%d", &dir);

    printf("Enter number of rotations: ");
    scanf("%d", &x);

    x = x%len;

    if(dir == 1){
        reverse(arr,0,len-1);
        reverse(arr,x,len-1);
        reverse(arr,0,x-1);
    }else{
        reverse(arr,0,len-1);
        reverse(arr,0,len-1-x);
        reverse(arr,len-x,len-1);
    }

    printf("Rotated array: ");

    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    

    return 0;
}