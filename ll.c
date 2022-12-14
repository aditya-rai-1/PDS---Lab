#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

/*void insert(struct node *header,int key,struct node *q){
    struct node *p,*temp;
    p = header;
    while(p->data != key){
        p = p->next;
    }

    temp = p->next;
    p->next = q;
    q->next = temp;


    return;
}

//header ko null kro har baar


struct node* insert_first(struct node * header,int value){
    struct node *p;
    p = (struct node *) malloc (sizeof(struct node));
    p->data = value;
    p->next = header;
    return p;   //p is the new header
}

struct node* insert_last(struct node * header,int value){
    struct node *p,*q;
    p = (struct node *)malloc(sizeof(struct node));
    p->data = value;
    p->next = NULL;

    if(header == NULL) return p; //header will be changed.if the list is empty.


    q = header;
    while(q->next != NULL) q = q->next;
    q->next = p;

    //everytime return header
    return header;
}

struct node * delete(struct node * header,int value){
    struct node *p;
    p = header;
    while(p->next->data != value) p = p->next;
    p->next = p->next->next;

    return header;
}*/


struct node *  insert_in_asc(struct node *header ,int value){
    struct node *p,*q;
    p = (struct node *)malloc(sizeof(struct node));
    p ->data = value;
    p ->next = NULL;

    //case when head is null ,i.e no elements
    if(header == NULL) return p;

    q = header;
    if(q->data >= value){
         p->next = q;
         return p;
    }

    while(q->next->data >= value){
        q = q->next;
        if(q->next == NULL) break;
    }
    p->next = q ->next;
    q ->next = p;

    return p;
    
}

struct node* delete(struct node *header,int value){
    struct node *p;

    p = header;
    

    if(header == NULL) return p;
    if(p->data == value) return (p->next);

    while(p->next->data != value){
        p = p->next;
        if(p->next == NULL) return (header);
    }

    p->next = p->next->next;
    return (header);
    //always return header.
}

struct node* insert_at_front(struct node* header,int value){
    struct node* p;
    p = (struct node* ) malloc(sizeof(struct node));
    p->data = value;
    p->next = header;

    return p;
}

struct node* insert_at_end(struct node* header,int value){
    struct node* p,*q;
    p = (struct node* ) malloc(sizeof(struct node));
    p->data = value;
    p->next = NULL;
    if(header == NULL) return p;

    q = header;
    while(q->next != NULL) q = q->next;
    q->next = p;

    return (header);
}

void print_ll(struct node* header){

    struct node* p = header;

    while(p != NULL){
        printf("%d ",p->data);
        p = p->next;
    }
    printf("\n");
    return;
}

int main()
{
    struct node* header = NULL;

    header = insert_at_front(header,5);
    print_ll(header);
    header = insert_at_front(header,4);
    print_ll(header);
    header = insert_at_front(header,3);
    print_ll(header);
    header = insert_at_front(header,2);
    print_ll(header);
    header = insert_in_asc(header,1);
    print_ll(header);
    header = delete(header,5);
    print_ll(header);
    header = delete(header,4);
    print_ll(header);
    header = delete(header,3);
    print_ll(header);
    header = insert_at_end(header,3);
    print_ll(header);
    header = insert_at_end(header,4);
    print_ll(header);
    header = insert_at_end(header,5);
    print_ll(header);


    return 0;
}








