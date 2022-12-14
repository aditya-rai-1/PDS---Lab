#include<stdio.h>
unsigned long gcd(unsigned long int a,unsigned long int b);
int main(){
    int n=1;
    unsigned long int t,num=2,den=1,gcd1;
    while(n<=5){
        t=num;
        num= num*num+ 2*den*den;
        den=2*t*den;
        gcd1=gcd(num,den);
        num=num/gcd1;
        den=den/gcd1;
        printf(" n=%d: %d/%d\n",n+1,num,den);
        n++;

        

    }

return 0;
}
unsigned long gcd(unsigned long int a,unsigned long int b){
    int temp;
    while(a%b!=0){
        temp=a%b;
        a=b;
        b=temp;
    }
    return b;
}