#include<stdio.h>
int fact(int n){
    if(n==0) return 1;
    else{
        int i,product=1;
        for(i=1;i<=n;product*=i,i++);
        return product;
    }
}
int nCr(int n,int r){
    return (fact(n)/(fact(r)*fact(n-r)));
}
int main()
{   int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    printf("1\n");
    for(int i=1;i<=n;i++){
        printf("1 ");
        for(int j=1;j<i;j++){
            printf("%d ",nCr(i,j));
        }
        printf("1\n");
    }

    
return 0;
}