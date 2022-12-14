#include<stdio.h>
int main(){
    int n,i,j,flag=0;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=i;j<=n;j++){
            if((i+j)%2==0){
                
                printf("(%d,%d)",i,j);
                if(!(i+j==2*n)) printf(",");
                else printf(".");
                flag=1;
            }
        }
    }
    
    if(flag==0){
        printf("\nNo such pairs exists.");
    }
return 0;
}