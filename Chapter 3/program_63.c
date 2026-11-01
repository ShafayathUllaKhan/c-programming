#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Dynamic Array structure
typedef struct{
    int *data;
    int nextElementIndex;
    int capacity;
} DynamicArray;

// Initialize dynamic array
bool init(DynamicArray *d){
    d->capacity = 5;
    d->nextElementIndex = 0;
    d->data = malloc(d->capacity * sizeof(int));

    if(d->data == NULL){
        return false;
    }

    return true;
}

// Double the capacity
bool doubleCapacity(DynamicArray *d){
    int newCapacity = d->capacity * 2;

    int *temp = realloc(d->data,newCapacity * sizeof(int));
    if(temp == NULL){
        return false;
    }

    d->data = temp;
    d->capacity = newCapacity;

    return true;
}

// Add an element
bool add(DynamicArray *d, int elem){
    if(d->nextElementIndex == d->capacity){
        if(!doubleCapacity(d)){
            return false;
        }
    }

    d->data[d->nextElementIndex] = elem;
    d->nextElementIndex++;
    return true;
}

// Release allocated memory
void destroy(DynamicArray *d){
    free(d->data);

    d->data = NULL;
    d->nextElementIndex = 0;
    d->capacity = 0;
}

// Return current size
int size(DynamicArray *d){
    return d->nextElementIndex;
}

// Set element at index
void set(DynamicArray *d,int i,int elem){
    if(i<0 || i>= d->nextElementIndex){
        return;
    }
    d->data[i] = elem;
}

// Get element at index
int get(DynamicArray *d,int i){
    if(i<0 || i>= d->nextElementIndex){
        return 0;
    }

    return d->data[i];
}

// Remove and return last element
int removeLast(DynamicArray *d){
    if(d->nextElementIndex == 0){
        return -1;
    }

    int temp = d->data[d->nextElementIndex -1];
    d->data[d->nextElementIndex -1] = 0;
    d->nextElementIndex--;
    return temp;
}

int main(void)
{
    DynamicArray d;

    if(!init(&d)){
        printf("Memory alloaction failed!\n");
        return 1;
    }

    for(int i=0;i<100;i++){
        if(!add(&d,100+i)){
            printf("unable to add element!\n");
            destroy(&d);
            return 1;
        }
    }

    printf("Size: %d\n",size(&d));

    set(&d, 2, 170);

    printf("Element at index 2: &d\n", get(&d,2));

    while(!isEmpty(&d)){
        printf("%d\n", removeLast(&d));

        printf("Size - %d\n", size(&d));
    }

    destroy(&d);

    return 0;
}