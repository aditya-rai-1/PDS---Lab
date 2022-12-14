#include<stdio.h>
int main(){
    int a,r;
    printf("Enter a positive number:");
    scanf("%d",&a);
    for(int i=0;i<4;i++){
        r=a%10;
        a=a/10;
        a=r*1000+a;
        printf("%4d\n",a);
    }



return 0;
}