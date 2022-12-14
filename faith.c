int sum(int n){
    if(n==1) return 1;
    else{
        return (sum(n-1)+n);
    }
}
#include<stdio.h>
int main(){
printf("%d",sum(10));
return 0;
}