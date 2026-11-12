#include <stdio.h>

// status values instead of java exceptions
typedef enum{
    STACK_OK,
    STACK_EMPTY,
    STACK_MEMORY_ERROR
} StackStatus;


typedef struct{
    int data;
    node *next;
}node;

typedef struct 
{
    node *head;
    int size;
}stackll;

void initstack(stackll *s1){
    s1->head = NULL;
    s1->size = 0;
}

StackStatus pushLL(stackll *s1,int ele){
    node *newcode = malloc(sizeof(node));

    if(newcode == NULL){
        printf("meomary allocation failed. \n");
        exit(1);
    }

    newcode->data = ele;
    newcode->next = s1->head;
    s1->head = newcode;
    s1->size++;
    return STACK_OK;
}

int sizeLL(stackll *s1){
    return s1->size;
}

StackStatus topLL(stackll *s1,int *result){
    if(s1->head == NULL){
        return STACK_EMPTY;
    }

    *result = s1->head->data;
    return STACK_OK;
}

StackStatus emptyll(stackll *s1){
    return s1->size == 0;
}

StackStatus popll(stackll *s1,int *result){
    if(s1->head == NULL){
        return STACK_EMPTY;
    }

    node *temp = s1->head;
    *result = s1->head->data;
    s1->head = s1->head->next;
    free(temp);
    s1->size--;
    return STACK_OK;
}

void destroyStackLL(stackll *s1){
    node *current = s1->head;
    while(current != NULL){
        node *temp = current;
        current = current->next;
        free(temp);
    }
    s1->head = NULL;
    s1->size = 0;
}

int main(void)
{
    stackll s1;
    initstack(&s1);
    int arr[] = {5,6,7,1,9};
    int length = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < length; i++)
    {
        if(pushLL(&s1,arr[i]) != STACK_OK){
            printf("could not push element\n");
            destroyStackLL(&s1);
            return 1;
        }
    }
    printf("Stack size: %d\n",sizeLL(&s1));

    // display top element
    int result;

    if(topLL(&s1,&result)==STACK_OK){
        printf("the top element is: %d\n",result);
    }

    // Pop all elements
    printf("Popping elements\n");

    while (!emptyll(&s1))
    {
        if(popll(&s1,&result) == STACK_OK){
            printf("poped element %d\n",result);
        }
    }

    // check whether stack is empty
    printf("\n is stack empty? %s\n",emptyll(&s1) ? "true" : "false");

    // release memory
    destroyStackLL(&s1);
    
    return 0;
}