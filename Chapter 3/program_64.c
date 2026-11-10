#include <stdio.h>
#include <stdlib.h>
// Node structure
typedef struct Node{
    int data;
    struct Node *next;
} Node;

Node *createNode(int data){

    Node *newNode = malloc(sizeof(Node));

    if(newNode == NULL){
        printf("Memory allocation failed!\n");
        exit(EXIT_FAILURE);
    }
    newNode->data = data;
    newNode->next = NULL;

    return newNode;
}

Node *createLinkedList(){
    Node *n1 = createNode(10);
    Node *n2 = createNode(20);
    Node *n3 = createNode(30);

    n1->next = n2;
    n2->next = n3;

    return n1;
}

void print(Node *head){
    if(head == NULL){
        return;
    }

    printf("%d ",head->data);
    print(head->next);
}

void increment(Node *head){

    if(head == NULL){
        return;
    }

    Node *temp = head;

    while(temp != NULL){
        temp->data++;
        temp = temp->next;
    }
}

Node *insert(Node *head,int elem,int pos){
    if(pos < 0){
        return head;
    }

    Node *newNode = createNode(elem);

    int count = 0;
    Node *temp = head;

    if(pos == 0 || pos == 1){
        newNode->next = head;
        return newNode;
    }
    while(count < pos-2 && temp != NULL){
        count++;
        temp = temp->next;
    }

    if(temp != NULL){
        newNode->next = temp->next;
        temp->next = newNode;
    }else{
        free(newNode);
    }
    return head;
}

int length(Node *head){
    Node *temp = head;

    int len = 0;
    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

void printR(Node *head){
    if(head == NULL){
        return;
    }

    printf("%d ",head->data);
    printR(head->next);
}

void printreverseR(Node *head){
    if(head == NULL){
        return;
    }
    printreverseR(head->next);
    printf("%d ",head->data);
}

Node *insertR(Node *head,int element,int pos){
    if(pos < 0){
        return head;
    }
    if(head == NULL){
        return head;
    }

    if(pos == 0){
        Node *newNode = createNode(element);
        newNode->next = head;
        return newNode;
    }

    head->next = insertR(head->next,element,pos-1);
    return head;
}

int main(void)
{
    Node *head = createLinkedList();
    printf("original list: \n");
    print(head);
    printf("\n");
    increment(head);
    printf("increment original list: \n");
    print(head);
    printf("\n");

    head = insert(head,40,4);
    printf("insert in position original list: \n");
    print(head);
    printf("\n");

    printf("Length of the linked list: %d\n",length(head));

    printf("Recursive print: \n");
    printR(head);
    printf("\n");

    printf("reverse print: \n");
    printreverseR(head);
    printf("\n");

    insertR(head ,90,2);
    printf("print after recursive logic: \n");
    printR(head);
    printf("\n");
    return 0;
}