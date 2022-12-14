#include<stdio.h>
int g(int n);
int f(int n);

int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    printf("f(%d)=%d,",n,f(n));
    printf(" g(%d)=%d",n,g(n));

return 0;
}
int f(int n){
    if(n==1) return 1;
    else {
        return (f(n-1)+2*g(n-1));
    }
}
int g(int n){
    if(n==1) return 0;
    else if(n==2) return -1;
    else{
        return (g(n-1)-2*f(n-2));
    }
}