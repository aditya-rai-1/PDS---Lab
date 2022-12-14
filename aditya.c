#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}node;    //linked list


node* insert_front(node * head,int value){
    node *p;
    p = (node *)malloc(sizeof(node));
    p->data = value;
    //p->next = NULL;

    p->next = head;

    return p; //New header.
}


void print(node * head){
    node *p = head;
    while(p != NULL){
        printf("%d ",p->data);
        p = p->next;
    }
    printf("\n");
    return ;
}


int main()
{   node *p,*head = NULL,*prev;
    int n;
    printf("Enter 3 numbers:\n");
    for(int i=0; i< 3; i++){
        p = (node *) malloc (sizeof(node));
        printf("Enter number:");
        scanf("%d",&p->data);
        p->next = NULL;

        if(head == NULL) head = p;
        else prev->next = p;

        prev = p;
    }

    print(head);
    printf("Enter the number you want to insert at front:");
    scanf("%d",&n);
    head = insert_front(head,n);

    print(head);

    return 0;
}