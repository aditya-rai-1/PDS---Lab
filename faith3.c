int fact(int n){
    if(n==1) return 1;
    else return (fact(n-1)*n);
}
#include<stdio.h>
int main(){
printf("%d",fact(10));
return 0;
}