#include<stdio.h>



#define MAX_STACK_SIZE 100



typedef struct{
    int data;
}element;

typedef struct{
    element list[MAX_STACK_SIZE];
    int top;
}stack;

//HUM BHI SEEDHA ELEMENT BHEJENGE.
//ADDRESS BHEJ RHA
void push(stack *A,element value){
    (A->top)++;
    (A->list[A->top]) = value;
    return;
}

void pop(stack *A){
    if(A->top > -1){
        (A->top)--;
    }
    return;
}


int main(){
    stack Z;
    Z.top = -1;






    return 0;
}





//seedha stack ka address bhejunga.