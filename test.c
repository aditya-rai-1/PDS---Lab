#include<stdio.h>
int x=5,y=10;
int print_values(int a,int b){
    printf("x=%d y=%d sum=%d,&x=%u,&y=%u\n",x,y,a+b,&x,&y);
    return (a+b);
}
int main(){
    int x,y,z;
    x=25%3;
    y=x/3;
    printf("x=%d y=%d &x=%u &y=%u\n",x,y,&x,&y);
    z=print_values(x,y);
    printf("x=%d y=%d z=%d \n",x,y,z);
    
return 0;
}