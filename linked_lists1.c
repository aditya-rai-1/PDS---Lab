//SCANNING A LINKED LIST
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

int search(struct node *header,int key);
void print_linklist(struct node *header);

int main()
{
    struct node *p,*header = NULL,*prev,*q;
    int n,key;
    printf("Enter the number of elements:");
    scanf("%d",&n);

    printf("Enter %d elements:\n",n);
    for(int i = 0; i < n ; i++){
        p = (struct node *) malloc (sizeof(struct node));
        scanf("%d",&p->data);
        p->next = NULL;

        if(header == NULL) header = p;
        else prev->next = p;  //remember previous vale me address daalna hai current me nhi
        prev = p;
    }
    //ALWAYS PRESERVE YOUR HEADER -----> MOST IMPORTANT
    p = header;
    while( p != NULL){
        printf("%d ",p->data);
        p = p->next;
    }

    printf("\nEnter key:");
    scanf("%d",&key);

    if(search(header,key) == 1) printf("Yes!\n");
    else printf("No\n");

    //inserting at front
    p = (struct node *) malloc( sizeof(struct node));
    printf("Enter the element to be inserted at front:");
    scanf("%d",&p->data);

    p->next = header;
    header = p;

   //inserting at END 
    q = (struct node *) malloc( sizeof(struct node));
    printf("Enter the element to be inserted at end:");
    scanf("%d",&q->data);
    q->next = NULL;


    p = header;
    while(p != NULL){
        prev = p;
        p = p->next; 
    }
    prev->next = q;

    print_linklist(header);

    printf("Enter the element you want to delete:");
    scanf("%d",key);

    delete(header,key);

    print_linklist(header);

    return 0;
}

int search(struct node *header,int key){
    struct node* p = header;
    int flag = 0;
    while(p != NULL){
        if(p->data == key){
            flag = 1;
            break;
        }
        p = p->next;
    }
    return flag;
}

void print_linklist(struct node *header){
    struct node *p;
    p = header;
    while( p != NULL){
        printf("%d ",p->data);
        p = p->next;
    }
    return;
}

void delete(struct node *header,int key){
    struct node *p,*prev;
    p = header;
    while( p->data != key){
        prev = p;
        p = p->next;
    }
    prev->next = p->next;
    return;
}

