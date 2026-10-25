#include <stdio.h>
#include <string.h>
bool isSorted(int arr[],int len){

    if(len <= 1){
        return true;
    }

    if(arr[0] > arr[1]){
        return false;
    }

    return isSorted(arr+1, len-1);
}

bool isSortedbetter(int arr[], int length , int si){

    if(si == length-1){
        return true;
    }
    if(arr[si] > arr[si + 1 ]){
        return false;
    }

    return isSortedbetter(arr,length,si + 1);
}

int firstindex(int arr[], int length, int search){
    if(length == 0){
        return -1;
    }

    if(arr[0] == search){
        return 0;
    }

    int result = firstindex(arr+1,length-1,search);

    if(result == -1){
        return -1;
    }

    return result + 1;
}

int firstindexbetter(int arr[], int length, int search, int si){
    if(si > length-1){
        return -1;
    }

    if(arr[si] == search){
        return si;
    }

    return firstindexbetter(arr,length,search,si+1);
}

int lastindex(int arr[], int length, int search){

    if(length == 0){
        return -1;
    }
    int result = lastindex(arr+1,length-1,search);
    if(result != -1){
        return result + 1;
    }
    if(arr[0] == search){
        return 0;
    }
    return -1;
}

int lastindexbetter(int arr[], int length, int search,int si){
    if(si == length){
        return -1;
    }
    int result =  lastindexbetter(arr,length,search,si + 1);
    if(result != -1){
        return result;
    }
    if (arr[si] == search)
    {
        return si;
    }
    return -1;
}

bool isPalindrome(char str[],int start, int end){

    if(start >= end){
        return true;
    }

    if(str[start] != str[end]){
        return false;
    }

    return isPalindrome(str,start+1,end-1);
}

int main(void)
{
    int a[] = {1,2,3,4,5,2};
    int length = sizeof(a)/sizeof(a[0]);
    printf("the array is sorted %s\n",isSorted(a,length)? "true":"false");

    printf("the array is sorted %s\n",isSortedbetter(a,length,0)? "true":"false");

    printf("the first index is %d\n",firstindex(a,length,3));

    printf("the first index is %d\n",firstindexbetter(a,length,3,0));

    printf("the last index is %d\n",lastindex(a,length,2));

    printf("the last index is %d\n",lastindexbetter(a,length,2,0));

    char str[] = "abc";

    int len = strlen(str);

    printf("is string palindrome %s\n",isPalindrome(str,0,len-1) ? "true" : "false");

    return 0;
}