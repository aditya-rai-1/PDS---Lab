//TOUGH QUESTIONS 
//LINKED LISTS
#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* prev,*next;
}node;


node * insert_in_asc(node *head,int value){
    node *p,*q ;
    int flag = 0;
    p = head;
    while(p!= NULL){
        if(p->data == value){
            flag = 1;
            break;
        }
        p = p->next;
    }

    if(flag == 1) return head;


    p = (node *) malloc(sizeof(node));
    p->next = NULL;
    p->prev = NULL;
    p->data = value;

    q = head;
    if(head == NULL) return p;
    if(q->data >= value) {
        p->next = q;
        q->prev = p;
        return p;
    }

    while(q->next != NULL){
        if(q->next->data >= value){
            p->next = q->next;
            q->next = p;
            p->prev = q;
            q->next->prev = p;
            return head;
        }
        q = q->next;
    }

    q->next = p;
    p->prev = q;
    return head;

}



int min_search_dist(node * head,int value){
    int count_l = 0,count_r = 0, flag = 0;
    node *p = head;

    while(p != NULL){
        if(p->data == value ){
            flag = 1;
            break;
        }
        p = p->next;
    }

    if(flag == 0) return (-1);

    while(p != NULL){
        count_l++;
        if(p->data == value) break;
        p = p->next;
    }
    
    p = head;
    while(p->next != NULL) p = p->next;

    while(p != NULL){
        count_r++;
        if(p->data == value) break;
        p = p->prev;
    }

    return ((count_l > count_r )? count_r : count_l); 

}

void print(node *head){
    node *p;
    p = head;
    if(head == NULL){
        printf("List empty.\n");
        return;
    }

    while(p != NULL){
        printf("%d ",p->data);
        p = p->next;
    }    
    
    printf("\n");
    return ;
}



int main()
{
    node *head = NULL;
    int choice;
    

    while(1){
        printf("Choose among the following choices :\n1.Insert an element\n2.Find minimum search distance\n3.Print the list\n4.Exit");
        printf("\nEnter the choice number:");
        scanf("%d",&choice);

        switch(choice){
            case 1: {int n;
                    printf("Enter the number:");
                    scanf("%d",&n);
                    head = insert_in_asc(head,n);
            }continue;
        
            case 2: { int n;
                    printf("Enter the number :");
                    scanf("%d",&n);
                    printf("%d\n",min_search_dist(head,n));

            }continue;

            case 3: print(head);
            continue;

            case 4: { printf("Exited Successfully\n");
                      return 0;
        }
        }


    }

    return 0;
}

