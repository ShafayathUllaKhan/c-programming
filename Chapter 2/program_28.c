#include <stdio.h>

int update(int arr[],int key,int newKey,int n){

    for (int i = 0; i < n; i++)
    {
        if(arr[i] == key){
            arr[i] = newKey;
            return 1;
        }
    }
    return 0;
    
}

int main(void)
{
    int n,key,newKey;
    printf("enter the capacity:\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the element at the index at %d \n",i);
        scanf("%d",&arr[i]);
    }

    printf("Enter the key: \n");
    scanf("%d",&key);

    printf("Enter the new key: \n");
    scanf("%d",&newKey);

    update(arr,key,newKey,n);

    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}

// enter the capacity:
// 5
// Enter the element at the index at 0 
// 10
// Enter the element at the index at 1 
// 20
// Enter the element at the index at 2 
// 30
// Enter the element at the index at 3 
// 40
// Enter the element at the index at 4 
// 50
// Enter the key: 
// 20
// Enter the new key: 
// 300

// 10
// 300
// 30
// 40
// 50