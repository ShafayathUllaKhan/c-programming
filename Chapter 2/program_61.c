#include <stdio.h>
#include <string.h>
/* Replace every occurrence of character a with character b */

void replaceChar(char *arr, char a, char b, char *replaced){
    if(*arr == '\0'){
        *replaced = '\0';
        return;
    }

    *replaced = (*arr == a) ? b : *arr;
    replaceChar(arr+1,a,b,replaced+1);
}

/* Replace every occurrence of "pi" with "3.14" */
void replacePi(char *s, char *result){
    if(*s == '\0'){
        *result = '\0';
        return;
    }

    if(s[0] == 'p' && s[1] == 'i'){
        memcpy(result,"3.14",4);
        replacePi(s+2,result+4);
    }else{
        *result = *s;
        replacePi(s+1,result+1);
    }
}

//  printf("BinarySearch: %d\n",BinarySearch(searchArray,4,0,searchLength-1));

 int BinarySearch(int searchArray[],int target,int si,int ei){

    if(si > ei){
        return -1;
    }

    int mid = si + (ei-si)/2;

    if(searchArray[mid]== target){
        return mid;
    }

    if(searchArray[mid] < target){
        return BinarySearch(searchArray,target,mid+1,ei);
    }else{
        return BinarySearch(searchArray,target,si,mid-1);
    }
 }

void sort(int arr[],int low,int mid,int high){
    int left = low;
    int leftend = mid;
    int rigth = mid+1;
    int rightend = high;

    int arr1[high-low + 1];
    int k=0;

    while (left<=leftend && rigth <= rightend)
    {
        if(arr[left]<= arr[rigth]){
            arr1[k] = arr[left];
            k++;
            left++;
        }else{
            arr1[k] = arr[rigth];
            rigth++;
            k++;
        }
    }

    while (left <= leftend)
    {
        arr1[k] = arr[left];
        k++;
        left++;
    }
    
    while (rigth <= rightend)
    {
        arr1[k] = arr[rigth];
        k++;
        rigth++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = arr1[i-low];
    }
}

// Recursive merge sort
void MergeSort(int a[],int low,int high){
    if(low >= high){
        return;
    }

    int mid = low + (high - low) /2;
    MergeSort(a,low,mid);
    MergeSort(a,mid+1,high);
    sort(a,low,mid,high);
}

void printArray(char arr[],int size){
    for (int i = 0; i < size; i++)
    {
        printf("%c",arr[i]);
    }
    printf("\n");
}

void printArray1(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}



int main(void)
{
    char a = 'a';
    char b = 'b';

    char input[] = "aa";
    char replaced[sizeof input];

    replaceChar(input, a, b, replaced);
    int replaced_size = sizeof(replaced) / sizeof(replaced[0]);
    printf("replace char are:- ");
    printArray(replaced,replaced_size); 

    char piInput[] = "aapi";
    char piOutput[sizeof(piInput+4)];

    replacePi(piInput, piOutput);

    // Binary search requires a sorted array

    int searchArray[] = {1,2,3,4};
    int searchLength = (int)sizeof(searchArray)/sizeof(searchArray[0]);

    int piOutput_size = sizeof(piOutput) / sizeof(piOutput[0]);
    printArray(piOutput,piOutput_size); 

    printf("BinarySearch: %d\n",BinarySearch(searchArray,4,0,searchLength-1));

    int mergeArray[] = {1,4,3,2,2,2};
    int mergeLength = (int)sizeof(mergeArray)/sizeof(mergeArray[0]);

    MergeSort(mergeArray,0,mergeLength-1);

    printArray1(mergeArray,mergeLength);

    
    return 0;
}