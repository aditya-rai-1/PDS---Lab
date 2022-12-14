#include<stdio.h>
int fact(int n);
int main(){
    double x,t,i=1,curr_sum=1.0;
    printf("Enter x:");
    scanf("%lf",&x);
    t=x;
    while(!((t/fact(i))<(0.01*curr_sum))){
        curr_sum+=t/fact(i);
        t*=x;
        i++;
    }
    printf("Answer = %lf",curr_sum);
return 0;
}
int fact(int n){
    int t=1;
    for(int i=1;i<=n;i++){
        t*=i;
    }
    return t;
}