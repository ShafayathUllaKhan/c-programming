// insert a element in position

#include <stdio.h>

int takeInput(char *str){
    int n;
    printf("%s",str);
    scanf("%d",&n);
    return n;
}

int insert(int arr[],int pos,int ele, int size){
    for(int i = size;i > pos;i--){
        arr[i]= arr[i-1];
    }
    arr[pos] = ele;
    size++;
    return size;
}

int main(void)
{
    int cap = takeInput("Enter the capacity: \n");
    int size = takeInput("Enter the size: \n");

    if(cap < 0 || size < 0 || size > cap){
        printf("Invalid capacity or size.\n");
        return 1;
    }

    int arr[cap];

    for (int i = 0; i < size; i++)
    {
        printf("Enter the element on index %d\n",i);
        scanf("%d",&arr[i]);
    }
    
    if(size == cap){
        printf("Array is full. \n");
        return 1;
    }

    int element = takeInput("Enter the element to insert: \n");
    int pos = takeInput("Enter the position : \n");

    if (pos < 0 || pos > size){
        printf("Invalid position. \n");
        return 1;
    }

    size = insert(arr,pos,element,size);

    for(int i=0;i<size;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}