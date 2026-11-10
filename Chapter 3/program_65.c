#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int *data;
    int capacity;
    int topindex;
} stack;

void init(stack *s1){
    s1->capacity = 10;
    s1->data = malloc(s1->capacity * sizeof(int));

    if(s1->data == NULL){
        printf("Meomary allocation failed \n");
        exit(1);
    }

    s1->topindex = -1;
}

void doublecapacity(stack *s1){
    int newcapacity = s1->capacity * 2;
    int *temp = realloc(s1->data , newcapacity * sizeof(int));

    if (temp == NULL)
    {
        printf("Meomary allocation failed \n");
        exit(1);
    }

    s1->data = temp;
    s1->capacity = newcapacity;
    
}

void push(stack *s1,int elem){
    if (s1->topindex == s1->capacity - 1)
    {
        doublecapacity(s1);
    }
    
    s1->data[++s1->topindex] = elem;
}

// return stack size
int size(stack *s1){
    return s1->topindex + 1;
}

bool isempty(stack *s1){
    return s1->topindex == -1;
}

// return top element
int top(stack *s1){
    if(isempty(s1)){
        printf("the stack is empty \n");
        exit(1);
    }
    return s1->data[s1->topindex];
}

int pop(stack *s1){
    if(isempty(s1)){
        printf("the stack is empty \n");
        exit(1);
    }

    int temp =  s1->data[s1->topindex];
    s1->topindex--;
    return temp;
}

void destroystack(stack *s1){
    free(s1->data);
    s1->data = NULL;
    s1->topindex = -1;
    s1->capacity = 0;
}

int main(void)
{
    stack s1;
    init(&s1);
    push(&s1,10);
    push(&s1,20);
    push(&s1,30);

    printf("the size of stack is %d \n",size(&s1));
    printf("the top element is %d \n",top(&s1));

    printf("popped element %d \n", pop(&s1));
    printf("the top element after pop : %d \n",top(&s1));
    printf("is stack empty? %s\n",isempty(&s1)? "yes" : "no");

    destroystack(&s1);
    return 0;
}