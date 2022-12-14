#include<stdio.h>
void print(int);
int fact(int n);
int main(){
    print(10);
    printf("\n");
    printf("%d",fact(10));

return 0;
}

void print(int n){
    if(n==1){
        printf("1 ");
        return;
    }
    else{
        printf("%d ",n);
        print(n-1);
    }
}
int fact(int n){
    if(n==1) return 1;
    else return (n*fact(n-1));
}