/*#include<stdio.h>

struct node{
    int roll;
    char name[30];
    int age;
    struct node *next; 
};


int main()
{   struct node n1,n2,n3,*p;
    n1.next = n2.next = n3.next = NULL;
    n1.next = &n2;
    n2.next = &n3;
    printf("Enter the data:\n");
    scanf("%d %s %d" ,&n1.roll,n1.name,&n1.age);
    scanf("%d %s %d" ,&n2.roll,n2.name,&n2.age);
    scanf("%d %s %d" ,&n3.roll,n3.name,&n3.age);

    p = &n1;
    n1.next = &n2;
    n2.next = &n3;
    while( p != NULL){
        printf("%d %s %d\n",p->roll,p->name,p->age);
        p = p->next;
    }


return 0;
}*/

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};


/*int main()
{   struct node *p,*q,*r;
    p = (struct node *) malloc(sizeof(struct node*));
    p->data = 15;
    q = (struct node *) malloc(sizeof(struct node*));
    q->data = 18;
    q->next = NULL;
    p->next = q;
    r = p;

    //TRAVERSAL OF LINKED LIST 
    while( r!= NULL){
        printf("%d ",r->data);
        r = r->next;
    } 

    
return 0;
}*/
int main()
{   struct node *head = NULL,*p,*prev;
    int n;
    printf("Enter the number of data:");
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        p = (struct node *) malloc(sizeof(struct node ));
        scanf("%d",&(p->data));
        p->next = NULL;
        if(head == NULL) head = p;
        else p->next = prev;
        prev = p;
    }
    p->next = NULL;
    p = head;
    while(p != NULL){
        printf("%d ",p->data);
        p = p->next;
    }

    return 0;
}