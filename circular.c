#include<stdio.h>
#include<stdlib.h>
/*
#define N 100

typedef struct{
    int data[N],front ,rear;   
}queue;


queue * create(void){
    queue *p;
    p = (queue *)malloc(sizeof(queue));
    return p;
} */

int main() {

int i,j,n;

scanf("%d",&n);

if (n<1) return 0;

for (i=1; i<=n; i++) {

for (j=i; j<n; j++) printf("    "); /* get the start point to print */

for (j=0;j<i;j++) printf(" %3d",i+j); /* print in increasing order */

for ( j = 0; j < i -1; j++) printf(" %3d",i+j); /*print in decreasing order */

printf("\n");

}

return 0;

}











/*
int main(){




    return 0;
}*/