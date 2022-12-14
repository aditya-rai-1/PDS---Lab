#include<stdio.h>
void first_negative(int a[],int i,int j,int n);
int main(){
    int n,k,a[100];
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter k:");
    scanf("%d",&k);
    printf("Enter the elements:");
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    first_negative(a,0,k-1,n);
return 0;
}
void first_negative(int a[],int i,int j,int n){
    int flag=1;
    if(j==n) return;
    
    
    else{
        for(int k=i;k<=j;k++){
            if(a[k]<0) {
                printf("%d ",a[k]);
                flag=0;
                break;
            }
            
        }
        if(flag==1) printf("0 ");
        first_negative(a,i+1,j+1,n);
    }
}