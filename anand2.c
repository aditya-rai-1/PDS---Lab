/*#include<stdio.h>

typedef struct linkedlist{
    char firstname[100];
    char lastname[100];
    struct linkedlist *next;
}linkedlist;





void sort(linkedlist *head,int key){

    if(head == NULL) return;

    linkedlist *p = head,*round = head;
    if(key == 0){
    while(round != NULL){
        while(p->next != NULL){
            if(strcmp(p->firstname,p->next->firstname)>0){
                linkedlist temp = *p;
                *p = *(p->next);
                *(p->next) = temp;
            }
            p = head;
        }
    }
    }

    round = head;
    p = head;

    if(key == 1){
    while(round != NULL){
        while(p->next != NULL){
            if(strcmp(p->firstname,p->next->firstname)<0){
                linkedlist temp = *p;
                *p = *(p->next);
                *(p->next) = temp;
            }
            p = head;
        }
    }
    }

    round = head;
    p = head;

    if(key == 2){
    while(round != NULL){
        while(p->next != NULL){
            if(strcmp(p->lastname,p->next->lastname)>0){
                linkedlist temp = *p;
                *p = *(p->next);
                *(p->next) = temp;
            }
            p = head;
        }
    }
    }

    round = head;
    p = head;
    if(key == 3){
    while(round != NULL){
        while(p->next != NULL){
            if(strcmp(p->lastname,p->next->lastname)<0){
                linkedlist temp = *p;
                *p = *(p->next);
                *(p->next) = temp;
            }
            p = head;
        }
    }
    }


    return;
}*/

#include<stdio.h>

int main()
{
    //pattern printing
    int n;
    printf("Enter the number of rows:");
    scanf("%d",&n);

    for(int i = 1; i<= n; i++){
        for(int j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");

    }



    return 0;
}