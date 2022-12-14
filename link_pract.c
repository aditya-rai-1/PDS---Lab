#include<stdio.h>

typedef struct{
    int data;
     node* next;
}node;

int main()
{   node a,b,c;
    a.data = 2;
    a.next = &b;
    b.data = 3;
    b.next = &c;
    c.data = 4;
    c.next = NULL;
    printf("%d %d %d\n ",a.data,b.data,c.data);
    printf("%u %u %u",a.next,b.next,c.next);
    
return 0;
}