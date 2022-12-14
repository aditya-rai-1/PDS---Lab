#include<stdio.h>
#include<stdlib.h>

typedef struct bucket{
    int range;

    struct node{
        int itemid,price;
        struct node* next;
    } *inside;

    struct bucket* next;
}bucket;


struct node* insert_in_asc(struct node *head,int itemid,int value){
    struct node *p,*q;
    p = (struct node *) malloc (sizeof(struct node));
    p->itemid = itemid;
    p->price = value;
    p->next = NULL;

    q = head;

    if(head == NULL) return p;

    if(q->price >= value){
        p->next = q;
        return p;
    }

    while(q->next != NULL){

        if(q->next->price >= value){
            p->next = q->next;
            q->next = p;
            return head;
        }
        q = q->next;
    }

    q->next = p;
    return head;
}




void insert(bucket *head,int itemid,int price){
    bucket *p = head;

    for(int i = 0; i < (price/500) ; i++){
        p = p->next;
    }

    p->inside = insert_in_asc(p->inside,itemid,price);

    return ;
    
}



void print_bucket(bucket* head){
    bucket *p;
    struct node *q; 
    p = head;
    int k = 1;

    while(p != NULL){

        q = p->inside;

        if(q != NULL){


            printf("Bucket %d:\n",k);
            printf("Lower limit: %d\n", p == (head)? 0 : (p->range - 499));
            printf("Upper limit: %d\nItems:\n",p->range);

        
            while(q != NULL){
                printf("(%d,%d)\n",q->itemid,q->price);
                q = q->next;
            }     
        }
        p = p->next;
        printf("\n");
        k++;

    }
    return;
}


int main()
{   bucket *head = NULL,*p,*prev;
    int n,itemid,price;

    for(int i = 1; i < 11 ; i++){
        p = (bucket *) malloc (sizeof(bucket));
        p->range = 500 * i;
        p->next = NULL;
        p->inside = NULL;

        if(head == NULL) head = p;
        else{
            prev->next = p;
        }
        prev = p;
    }

    printf("Enter the number of items:");
    scanf("%d",&n);

    for(int i = 0; i < n ;i++){
        printf("\n\nEnter the item id:");
        scanf("%d",&itemid);
        printf("Enter the price:");
        scanf("%d",&price);

        insert(head,itemid,price);   
    }

    printf("\n\n");
    print_bucket(head);
    return 0;
}


