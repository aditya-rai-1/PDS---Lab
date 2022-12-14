int sum_of_digits(int n){
    if(n==0) return 0;
    else{
        return (sum_of_digits(n/10)+n%10);
    }
}
#include<stdio.h>
int main(){
printf("%d",sum_of_digits(545265));
return 0;
}