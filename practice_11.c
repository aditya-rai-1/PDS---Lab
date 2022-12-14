#include<stdio.h>
int main(){
    int n,x=1,y=1,z=3,t;
    printf("Enter n:");
    scanf("%d",&n);
    if(n==1||n==2) printf("T(%d)=1",n);
    else if(n==3) printf("T(3)=3");
    else{
        for(int i=3;i<n;i++){
            t=x+y+z;
            x=y;
            y=z;
            z=t;
        }
        printf("T(%d)=%d",n,t);
    }

return 0;
}