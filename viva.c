#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int i=1,rem,n=0;
    while(a>0){
        rem=a%2;
        a=a/2;
        n=n+(rem*i);
        i=i*10;
    }
    printf("%d",n);



return 0;
}