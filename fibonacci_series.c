#include<stdio.h>
int fib(int);
int main(){
printf("%d",fib(10));
return 0;
}
int fib(int n){
    if(n==1) return 0;
    else if(n==2) return 1;
    else {
        int i=fib(n-1)+fib(n-2);
        return i;
    }

}