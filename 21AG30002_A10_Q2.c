/* Name - Aditya Rai
   Roll No - 21AG30002 */
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;

typedef struct header{
    node *left,*right;
}header;


node* insertLeft(node* head,int data){
    node * p,*q;
    
    p = (node *) malloc(sizeof(node));
    p->next = NULL;
    p->data = data;

    if(head == NULL){
        return p;
    }

    q = head;
    while(q->next != NULL){
        q = q->next;
    }

    q->next = p;
    return head;

}


node* insertRight(node* head,int data){
    node * p,*q;
    
    p = (node *) malloc(sizeof(node));
    p->next = NULL;
    p->data = data;

    if(head == NULL){
        return p;
    }

    q = head;
    while(q->next != NULL){
        q = q->next;
    }

    q->next = p;

    return head;

}


void print(node *head){
    node *p;
    p = head;
    while(p != NULL){
        printf("%d -> ",p->data);
        p = p->next;
    }
    printf("NULL\n");

    return ;
}


int main()
{   
    header* head;

    head = (header *) malloc (sizeof(header));
    head->left = NULL;
    head->right = NULL;

    int n,direction;
    while(1){
        printf("\n\nEnter data: ");
        scanf("%d",&n);

        if(n == -1) break;

        printf("Enter direction:");
        scanf("%d",&direction);

        switch(direction){
            case 0: head->right = insertRight(head->right,n);
            continue;
            case 1: head->left = insertLeft(head->left,n);
            continue;
        }
    }

    printf("Left linked list: ");
    print(head->left);
    printf("Right linked list: ");
    print(head->right);

   return 0; 
}