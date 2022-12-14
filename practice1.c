#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c;
    printf("Enter a,b and c:");
    scanf("%lf%lf%lf",&a,&b,&c);
    double D=b*b-4*a*c;
    if(D<0){
        printf("Roots are complex.");
        return 0;
    }
    else{
        printf("Roots are %0.2lf,%0.2lf.",(-b+sqrt(D))/2*a,(-b-sqrt(D))/2*a);
    }
return 0;
}