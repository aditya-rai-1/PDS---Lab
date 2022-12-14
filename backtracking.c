#include<stdio.h>
int sum(int );
int main(){
int n;
scanf("%d",&n);
printf("%d",sum(n));
return 0;
}
int sum(int a){
    if(a==1){
        return 1;
    }
    else {int i=a+sum(a-1);
    return i;}
}