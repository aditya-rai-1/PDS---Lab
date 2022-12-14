#include<stdio.h>
#include<stdlib.h>


int main()
{
    int *p,*q;
    p = (int *) malloc(10 * sizeof(int));
    for(int i = 0 ; i < 10 ; i++){
        p[i] = 0;
    }
    q = p;
    printf("%d %d",*q++,*(q++));



return 0;
}