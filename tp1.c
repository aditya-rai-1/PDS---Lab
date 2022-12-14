#include<stdio.h>
int main()
{
    float j=1.0,i=2.0,z;
    z=0.0625;
    while(i/j>z){
        j=j+j;
    }
    printf("j=%.2f\n",j);
return 0;
}