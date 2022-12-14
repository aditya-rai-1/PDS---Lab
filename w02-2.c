#include<stdio.h>
int main(){
float a,b;
printf("Enter a:");
scanf("%f",&a);
printf("a=%.4f\n",a);
b=1-a;
a=a*a*a*a;
a=a*a*a*a; //a=a to the power 16
printf("p(a)=%.4f\n",(1-a)/b);
printf("q(a)=%.4f\n",((1-a)/(b*b))+16*a/b);
printf("r(a)=%.4f\n",1/b);

 
return 0;
}