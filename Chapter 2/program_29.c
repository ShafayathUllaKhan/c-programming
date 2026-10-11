#include <stdio.h>

void swap(int arr[],int l,int r){
    int temp;

    temp = arr[l];
    arr[l] = arr[r];
    arr[r] = temp;
}

int reverse(int arr[]){
    int l=2,r=5;

    while(l<r){
        swap(arr,l,r);
        l++;r--;
    }
    return 1;
}

int main(void)
{
    int cap;
  
    printf("Enter the capacity of the array: \n");
    scanf("%d",&cap);

    int arr[cap];

    for(int i=0;i<cap;i++){
        printf("enter the value of index %d",i);
        scanf("%d",&arr[i]);
    }

    reverse(arr);

    for (int i = 0; i < cap; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}

// Write a program to read an array of n elements and reverse the elements from index 2 to index 5 (inclusive) using a separate swap() function. Keep all other elements in their original positions.