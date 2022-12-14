#include<stdio.h>

#define MAX_STACK_SIZE 100
#define MAX 100000
#define MIN -100000

typedef struct{
    int data[MAX_STACK_SIZE];
    int top;
}stack;

void push(stack *s,int value){
    (s->top)++;
    s->data[s->top] = value;
}

void pop(stack *s){
    if((s->top) > -1) s->top--;
}

int isfull(stack *s){
    if(s->top >= MAX_STACK_SIZE) return 1;
    return 0;
}

int isempty(stack *s){
    if(s->top == -1) return 1;
    return 0;
}

void clear_stack(stack *s){
    s->top = -1;
}

int top(stack *s){
    return (s->data[s->top]);
}

int stack_min(stack *s){
    int n = MAX;
    for(int i = 0; i <= s->top ; i++){
        if(s->data[i] < n) n = s->data[i];
    }
    return n;
}

int stack_max(stack *s){
    int n = MIN;
    for(int i = 0; i <= s->top ; i++){
        if(s->data[i] > n) n = s->data[i];
    }
    return n;
}



int main()
{
    int a[] = {6,2,5,4,5,1,6},n = 7;
    stack ans,s;
    ans.top = -1;
    s.top = -1;

    for(int i = 0; i < n ; i++){
        int j = 0;
        while(a[j] >= a[i] && j < n){
            push(&s,a[j]);
            j++;
        }
        int m = stack_min(&s);
        push(&ans,(m * (s.top + 1)));
        clear_stack(&s);
    }

    printf("Ans = %d\n",stack_max(&ans));

    return 0;
}