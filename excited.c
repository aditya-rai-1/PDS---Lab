#include<stdio.h>
int main(){
int n,a[100];
printf("Enter a natural number:");
scanf("%d",&n);
int i=0,flag;
printf("Enter %d distinct numbers:\n",n);
while(i<n){
    flag=0;
    scanf("%d",&a[i]);
    int j=0;
    while(j<=i){
        if(a[i]==a[j]&&i!=j){
            printf("Number already exists,please enter a different number.\n");
            flag=1;
            break;
        }
        j++;
    }
    if(flag==0){
        i++;
    }
}
for(i=0;i<n;i++){
    printf("%d ",a[i]);
}
printf("\n");
for(int round=1;round<=n-1;round++){
for(i=0;i<n-round;i++){
    if(a[i]>a[i+1]){
        int t=a[i];
        a[i]=a[i+1];
        a[i+1]=t;
    }
}
}
for(i=0;i<n;i++){
    printf("%d ",a[i]);
}
printf("\n");
int m;
printf("Enter m:");
scanf("%d",&m);
printf("Smallest %d numbers in order:\n",m);
for(i=0;i<m;i++){
    printf("%d ",a[i]);
}







return 0;
}