#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    int data;
    struct Node *next;
} Node;


typedef struct stackUsingLL{
    Node *head;
    int size;
} stackUsingLL;

void initstack(stackUsingLL *s1){
    s1->head = NULL;
    s1->size = 0;
}

int isEmptyLL(stackUsingLL *s1){
    return s1->head == NULL;
}

int sizeLL(stackUsingLL *s1){
    return s1->size;
}

void pushLL(stackUsingLL *s1,int value){
    Node *newnode = malloc(sizeof(Node));
    if(newnode == NULL){
        printf("Memory allocation failed \n");
        exit(1);
    }
    newnode->data = value;
    newnode->next = s1->head;
    s1->head = newnode;
    s1->size++;
}

int topLL(stackUsingLL *s1){

    if(isEmptyLL(s1)){
        printf("stack is empty\n");
        exit(1);
    }

    return s1->head->data;
}

int popLL(stackUsingLL *s1){
    if(s1->head == NULL){
        printf("stack underflow \n");
        exit(1);
    }
    Node *popedelement  = s1->head;
    s1->head = s1->head->next;
    s1->size--;
    int result = popedelement->data;
    free(popedelement);
    return result; 
}



int main(void)
{
    stackUsingLL stack;
    initstack(&stack);

    pushLL(&stack,1);
    pushLL(&stack,1);
    pushLL(&stack,1);
    pushLL(&stack,1);

    printf("is stack empty : %d\n",isEmptyLL(&stack));
    printf("the size of stack %d\n",sizeLL(&stack));

    printf("the top element is %d\n",topLL(&stack));

    printf("the popped element is %d \n",popLL(&stack));
    
    return 0;
}