#include<stdio.h>
int main(){
int n,a[100];
printf("Enter the number:");
scanf("%d",&n);
a[0]=1;a[1]=1;
for(int i=2;i<n;i++){
    a[i]=a[i-1]+a[i-2];
    
}

for(int i=0;i<n;i++){
    if(i%2!=0){
        a[i]=-a[i];
    }

    printf("%d",a[i]);
    if(i<n-1){
        printf(",");
    }
    if(i==n-1){
        printf(".");
    }
}

return 0;
}   