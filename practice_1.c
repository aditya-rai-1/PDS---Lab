#include<stdio.h>
int main(){
    int n,i=1,rem,bin=0;
    printf("Enter n:");
    scanf("%d",&n);
    while(n!=0){
        rem=n%2;
        bin+=rem*i;
        i*=10;
        n=n/2;


    }
    printf("%d",bin);
return 0;
}