/*#include<stdio.h>

typedef struct{
    char name[20];
    int roll;
}data;



int main()
{   data p,*q=&p;
    printf("Address of p=%u\n",&p);
    printf("Value of q=%d\n",q);
    printf("Address of q=%u\n",&q);
    printf("%d",sizeof(int *));

    //INT likh rhe the to integer value return ho rhi thi lekin 
    //agar address return krna hai  to int * likho    
    
return 0;
} */

/*#include<stdio.h>

typedef struct{
    int r;
    int i;
}complex;



int main()
{   complex a,b,c;
    add(&a,&b,&c);
    
return 0;
}

void add(complex *a,complex *b,complex *c){
    (*c).r=(*a).r+(*b).r;
    (*c).i=(*a).i+(*b).i;

    c->r=a->r+b->r; 

}*/

#include<stdio.h>
int main()
{   int n=0;
    char *p1="ADITYA";
    char *p2="Rai";
    //strlen
    //string constant is actually a pointer....
    for(;*p1!='\0';n++,p1++);
    printf("%d\n",n);
    p1=p1-n;
    printf("%c\n",*p1);

    //strcat
    while(*p1!='\0') p1++;
    
    printf("%c\n",*p1);
    while(*p2!='\0'){
        *p1++=*p2++;
    }
    *p1='\0';
    p1=p1-9;
    printf("%s",p1);




return 0;
}