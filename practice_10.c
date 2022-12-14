#include<stdio.h>
int seq(int n);

int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    printf("T(%d)=%d",n,seq(n));
return 0;
}

int seq(int n){
    if(n==1||n==2) return 1;
    else if(n==3) return 3;
    else return (seq(n-1)+seq(n-2)+seq(n-3));
}